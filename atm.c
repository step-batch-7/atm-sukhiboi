#include "./atm.h"

note get_money(money amount)
{
    if_amount_exceed_limit give_nothing;
    note notes_count = 0;
    money total = amount;
    note notes[] = note_list;
    iterate_notes
    {
        notes_count <<= 4;
        notes_count |= total / notes[i];
        total %= notes[i];
    }
    return notes_count;
}