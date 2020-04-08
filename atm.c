#include "./atm.h"

unsigned int get_money(unsigned short int amount)
{
    if (amount > 31999)
        return 0;
    unsigned int notesCount = 0;
    unsigned short int total = amount;
    int demonitions[8] = {2000, 500, 100, 50, 20, 10, 5, 1};
    for (int i = 0; i < 8; i++)
    {
        notesCount <<= 4;
        notesCount |= total / demonitions[i];
        total %= demonitions[i];
    }
    return notesCount;
}