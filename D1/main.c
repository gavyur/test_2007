#include <stdio.h>
#include "../libs/inputlib.h"
#include "../libs/gavlib.h"

#define MAX_NUMBER 500

long long decompositions_count(int number, int max_num, int cache[MAX_NUMBER][MAX_NUMBER]);

int main()
{
    GREET("D1 problem", "1");

    long long number = 0;
    if (!input_integer("number N", &number))
        return 0;

    int cache[MAX_NUMBER][MAX_NUMBER];
    for (int i = 0; i < MAX_NUMBER; ++i)
        for (int j = 0; j < MAX_NUMBER; ++j)
            cache[i][j] = -1;

    printf("Result is %lld\n", decompositions_count(number, number, cache));

    return 0;
}

long long decompositions_count(int number, int max_num, int cache[MAX_NUMBER][MAX_NUMBER])
{
    if ((!number) && (!max_num))
        return 1;
    if (max_num == 0)
        return 0;
    if (cache[number][max_num] != -1)
        return cache[number][max_num];
    if (max_num <= number)
        cache[number][max_num] = decompositions_count(number, max_num - 1, cache) + decompositions_count(number - max_num, max_num, cache);
    else
        cache[number][max_num] = decompositions_count(number, number, cache);
    return cache[number][max_num];
}
