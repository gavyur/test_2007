#include <stdio.h>
#include "inputlib.h"

int input_float(const char name[], FLOAT_TYPE* value)
{
    int tries = 0;
    int result = 0;
    while ((tries < ERR_INPUT_TRIES) && (result == 0))
    {
        result = input_float_once(name, value, true);
        if (!result)
        {
            ++tries;
            clear_stdin();
            if (tries < ERR_INPUT_TRIES)
                printf("#--- Let's try again!\n");
            else
                printf("#--- That was last try :(\n");
        }
    }
    return result;
}

int input_float_once(const char name[], FLOAT_TYPE* value, int ask_entering)
{
    int result = 0;
    if (ask_entering)
        printf("#--- Enter an floating-point value for %s> ", name);
    result = scanf(FLOAT_SCANF_TYPE, value);
    if (result == 0)
        printf("#--- Incorrect input!\n");
    return result;
}

int input_integer(const char name[], INTEGER_TYPE* value)
{
    int tries = 0;
    int result = 0;
    while ((tries < ERR_INPUT_TRIES) && (result == 0))
    {
        result = input_integer_once(name, value, true);
        if (!result)
        {
            ++tries;
            clear_stdin();
            if (tries < ERR_INPUT_TRIES)
                printf("#--- Let's try again!\n");
            else
                printf("#--- That was last try :(\n");
        }
    }
    return result;
}

int input_integer_once(const char name[], INTEGER_TYPE* value, int ask_entering)
{
    int result = 0;
    if (ask_entering)
        printf("#--- Enter an integer value for %s> ", name);
    result = scanf(INTEGER_SCANF_TYPE, value);
    if (result == 0)
        printf("#--- Incorrect input!\n");
    return result;
}

void clear_stdin()
{
    char trash[256];// = {};
    scanf("%s", trash);
}
