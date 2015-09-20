#include <stdio.h>
#include <math.h>
#include "../libs/inputlib.h"
#include "../libs/gavlib.h"

long long divisors_sum(long long number);

int main()
{
    GREET("B2 problem", "1");

    long long number = 0;
    if (!input_integer("number", &number))
        return 0;

    printf("%lld", divisors_sum(number));

    return 0;
}

long long divisors_sum(long long number)
{
    long long result_sum = 1 + number;
    long long current_divisor = 2;
    long long limit = ceil(sqrt(number));
    while (current_divisor <= limit)
    {
        if (number % current_divisor == 0)
        {
            result_sum += current_divisor;
            if (number / current_divisor != current_divisor) // number isn't square
                result_sum += number / current_divisor;
        }
        ++current_divisor;
    }
    return result_sum;
}
