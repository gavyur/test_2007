#include <stdio.h>
#include <math.h>
#include "../libs/inputlib.h"
#include "../libs/gavlib.h"

int find_primes(long long numbers_count);
int isprime(long long number);

int main()
{
    GREET("A1 problem", "1");

    long long numbers_count = 0;
    if (!input_integer_once("amount of numbers", &numbers_count, true))
        return 0;
    printf("#--- Enter %lld numbers> ", numbers_count);
    if (!find_primes(numbers_count))
        printf("#--- There is no prime numbers!\n");

    return 0;
}

int find_primes(long long numbers_count)
{
    int result = 0;
    for (long long i = 0; i < numbers_count; ++i)
    {
        long long number = 0;
        if (!input_integer_once("", &number, false))
            return 0;
        if (isprime(number))
        {
            result = 1;
            printf("%ld ", number);
        }
    }
    if (result)
        printf("\n");
    return result;
}

int isprime(long long number)
{
    if (number == 1)
        return 0;
    long long limit = ceil(sqrt(number));
    for (long long i = 2; i <= limit; ++i)
        if ((number % i == 0) && (number != i))
            return 0;
    return 1;
}
