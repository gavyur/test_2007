#include <stdio.h>
#include <math.h>
#include "../libs/inputlib.h"
#include "../libs/gavlib.h"

long long square_divisor(long long number);

int main()
{
    GREET("B1 problem", "1");

    long long number = 0;
    if (!input_integer("number", &number))
        return 0;
    long long divisor = square_divisor(number);
    if (divisor)
        printf("YES. For example, divisor %ld\n", divisor);
    else
        printf("NO\n");

    return 0;
}

long long square_divisor(long long number)
{
    int divisors_count = 0;
    long long current_divisor = 2;
    while ((number > 0) && (current_divisor <= number))
    {
        if (number % current_divisor == 0)
        {
            number /= current_divisor;
            ++divisors_count;
            if (divisors_count == 2)
                return current_divisor * current_divisor;
        } else
        {
            ++current_divisor;
            divisors_count = 0;
        }
    }
    return 0;
}
