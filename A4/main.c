#include <stdio.h>
#include <math.h>

#define INTEGER_TYPE int
#define INTEGER_SCANF_TYPE "%d"

#include "../libs/inputlib.h"
#include "../libs/gavlib.h"

void print_table_mod(int number);

int main()
{
    GREET("A4 problem", "1");

    int number = 0;
    if (!input_integer("number N", &number))
        return 0;

    print_table_mod(number);

    return 0;
}

void print_table_mod(int number)
{
    for (int k = 0; k < number; ++k)
    {
        for (int a = 1; a < number; ++a)
        {
            printf("%d ", (int)(pow(a, k)) % number);
        }
        printf("\n");
    }
}
