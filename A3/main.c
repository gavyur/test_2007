#include <stdio.h>
#include <float.h>
#include <math.h>
#include "../libs/inputlib.h"
#include "../libs/gavlib.h"

double get_sum(long long number, double x);
long long factorial(long long number);

int main()
{
    GREET("A3 problem", "1");

    long long number = 0;
    double x = 1;
    if (!input_integer("number N", &number))
        return 0;
    if (!input_float("number x", &x))
        return 0;
    printf("Sum is %.7g\n", get_sum(number, x));

    return 0;
}

double get_sum(long long number, double x)
{
    double sum = 0;
    for (long long k = 0; k <= number; ++k)
    {
        double to_sum = pow(x, k) / factorial(k);
        if (IS_ZERO(to_sum))
            break;
        sum += to_sum;
    }
    return sum;
}

long long factorial(long long number)
{
    long long result = 1;
    for (long long i = 2; i <= number; ++i)
        result *= i;
    return result;
}
