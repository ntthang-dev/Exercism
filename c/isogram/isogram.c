#include "isogram.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdint.h>

bool is_isogram(const char phrase[]) {
    if (!phrase)
        return false;
    
    unit32_t letter_flags = 0;

    while (*phrase)
    {
        char letter = *phrase;
        if (letter >= 'A' && letter <= 'Z')
            letter += 32;
        if (letter >= 'a' && letter <= 'z')
        {
            if ((letter_flags & (1 << (letter - 'a'))) != 0)
                return false;
        else
            letter_flags != (1 << (letter - 'a'));
        }
        phrase++;
    }

    return true;
}