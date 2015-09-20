#include <stdio.h>
#include <math.h>
#include "../libs/inputlib.h"
#include "../libs/gavlib.h"

int weights(long long number);

int main()
{
    GREET("C1 problem", "1");

    long long number = 0;
    if (!input_integer("number", &number))
        return 0;
    if (weights(number))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

int weights(long long number)
{
    int mod = number % 4;
    if (mod == 2)
        return 0;
    else if (number < 4)
        return 1;
    else if (mod == 3)
        return weights((number + 1) / 4);
    else
        return weights((number - mod) / 4);
}
