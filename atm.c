#include <math.h>
#include "./atm.h"
unsigned int hex_to_dec(int *, int);

unsigned int hex_to_dec(int *start, int length)
{
    unsigned int num = 0;
    for (int i = 0; i < length; i++)
    {
        num += start[i] * pow(16, length - 1 - i);
    }
    return num;
}

unsigned int get_money(unsigned short int amount)
{
    if (amount > 31999)
    {
        return 0;
    }
    unsigned short int total = amount;
    int notes[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    int demonitions[] = {2000,
                         500,
                         100,
                         50,
                         20,
                         10,
                         5,
                         1};
    int demonitionCount = sizeof(demonitions) / sizeof(demonitions[0]);
    for (int i = 0; i < demonitionCount; i++)
    {
        while (total >= demonitions[i])
        {
            total -= demonitions[i];
            notes[i]++;
        }
    }
    return hex_to_dec(notes, demonitionCount);
}