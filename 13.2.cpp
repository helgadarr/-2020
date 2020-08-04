#include "requires.h"


static int cmp(char* str)
{
    for (int i = 1; i < strlen(str); i++)
    {
        if (str[i] < str[i - 1]) return 0;
    }

    return 1;
}
