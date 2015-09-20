#ifndef INPUTLIB_H_INCLUDED
#define INPUTLIB_H_INCLUDED

#include "gavlib.h"

#define ERR_INPUT_TRIES 3
#define INTEGER_TYPE long long
#define INTEGER_SCANF_TYPE "%lld"
#define FLOAT_TYPE double
#define FLOAT_SCANF_TYPE "%lg"

int input_float(const char name[], FLOAT_TYPE* value);
int input_float_once(const char name[], FLOAT_TYPE* value, int ask_entering);
int input_integer(const char name[], INTEGER_TYPE* value);
int input_integer_once(const char name[], INTEGER_TYPE* value, int ask_entering);
void clear_stdin();

#endif // INPUTLIB_H_INCLUDED
