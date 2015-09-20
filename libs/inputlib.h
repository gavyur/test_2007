#ifndef INPUTLIB_H_INCLUDED
#define INPUTLIB_H_INCLUDED

#include "gavlib.h"

#ifndef ERR_INPUT_TRIES
    #define ERR_INPUT_TRIES 3
#endif // ERR_INPUT_TRIES
#ifndef INTEGER_TYPE
    #define INTEGER_TYPE long long
#endif // INTEGER_TYPE
#ifndef INTEGER_SCANF_TYPE
    #define INTEGER_SCANF_TYPE "%lld"
#endif // INTEGER_SCANF_TYPE
#ifndef FLOAT_TYPE
    #define FLOAT_TYPE double
#endif // FLOAT_TYPE
#ifndef FLOAT_SCANF_TYPE
    #define FLOAT_SCANF_TYPE "%lg"
#endif // FLOAT_SCANF_TYPE

int input_float(const char name[], FLOAT_TYPE* value);
int input_float_once(const char name[], FLOAT_TYPE* value, int ask_entering);
int input_integer(const char name[], INTEGER_TYPE* value);
int input_integer_once(const char name[], INTEGER_TYPE* value, int ask_entering);
void clear_stdin();

#endif // INPUTLIB_H_INCLUDED
