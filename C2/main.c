#include <stdio.h>
#include <float.h>
#include <math.h>
#include "../libs/inputlib.h"
#include "../libs/gavlib.h"

int find_squares(long long number, long long* sq1, long long* sq2, long long* sq3);
int is_square(long long number);

int main()
{
    GREET("C2 problem", "1");

    long long number = 0;
    if (!input_integer("number", &number))
        return 0;
    long long sq1 = 0, sq2 = 0, sq3 = 0;
    if (find_squares(number, &sq1, &sq2, &sq3))
        printf("%lld + %lld + %lld = %lld\n", sq1, sq2, sq3, number);
    else
        printf("There is no such three square numbers\n");

    return 0;
}

int find_squares(long long number, long long* sq1, long long* sq2, long long* sq3)
{
    for (long long i = 0; i * i <= number; ++i)
    {
        long long square_i = i * i;
        long long j_max = number - square_i;
        for (long long j = 0; j * j <= j_max; ++j)
        {
            long long square_j = j * j;
            long long k = number - square_i - square_j;
            if (is_square(k))
            {
                *sq1 = square_i;
                *sq2 = square_j;
                *sq3 = k;
                return 1;
            }
        }
    }
    return 0;
}

int is_square(long long number)
{
    return IS_ZERO((sqrt(number) - trunc(sqrt(number))));
}
