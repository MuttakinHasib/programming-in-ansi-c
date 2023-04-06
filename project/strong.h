#include "factorial.h"

void strong(int);
void strong(int num)
{
    int i, rem, sum = 0;
    for (i = num; i != 0; i /= 10)
    {
        rem = i % 10;
        sum += factorial(rem);
    }
    if (sum == num)
        printf("%d is a strong number", num);
    else
        printf("%d is not a strong number", num);
}