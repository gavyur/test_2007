#include <stdio.h>
#include <math.h>
#include "../libs/inputlib.h"
#include "../libs/gavlib.h"

#define DIGITS_CNT 4

long long digit_sum(long long number);
int print_numbers(long long dig_sum);

int main()
{
    GREET("B3 problem", "1");

    long long dig_sum = 0;
    if (!input_integer("digit sum", &dig_sum))
        return 0;

    printf("%d\n", print_numbers(dig_sum));

    return 0;
}

int print_numbers(long long dig_sum)
{
    int min = pow(10, DIGITS_CNT - 1);
    int max = pow(10, DIGITS_CNT);
    int count = 0;
    for (int i = min; i < max; ++i)
    {
        if (digit_sum(i) == dig_sum)
        {
            printf("%d ", i);
            ++count;
        }
    }
    if (count)
        printf("\n");
    return count;
}

long long digit_sum(long long number)
{
    long long result = 0;
    while (number > 0)
    {
        result += number % 10;
        number /= 10;
    }
    return result;
}
