#include <stdio.h>
#include "atm.h"

int main(void)
{
  unsigned short int amounts[] = {1, 10, 39, 589, 2590, 31999, 32000};
  for (int i = 0; i < 7; i++)
  {
    unsigned int notes = get_money(amounts[i]);
    printf("%5u %08x\n", amounts[i], notes);
    printf("%d", 1<<1);
  }

  return 0;
}
