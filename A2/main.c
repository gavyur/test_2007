#include <stdio.h>
#include "../libs/inputlib.h"
#include "../libs/gavlib.h"

long long gcd(long long a, long long b);
long long lcm(long long a, long long b);

int main()
{
    GREET("A2 problem", "1");

    long long a = 0, b = 0, c = 0;
    if (!input_integer("first number", &a))
        return 0;
    if (!input_integer("second number", &b))
        return 0;
    if (!input_integer("third number", &c))
        return 0;

    printf("Least common multiple is %lld\n", lcm(a, lcm(b, c)));

    return 0;
}

long long gcd(long long a, long long b)
{
    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

long long lcm(long long a, long long b)
{
    return a * b / gcd(a, b);
}
