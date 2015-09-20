#ifndef GAVLIB_H_INCLUDED
#define GAVLIB_H_INCLUDED

#define MY_NAME "GavYur"
#define GREET(program, version) printf("#--- " program " v" version " (%s %s) by " MY_NAME "\n\n", __DATE__, __TIME__)
#define IS_ZERO(number) fabs(number) < DBL_EPSILON
#define true 1
#define false 0

#endif // GAVLIB_H_INCLUDED
