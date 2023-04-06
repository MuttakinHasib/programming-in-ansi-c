#include <math.h>

void armstrong(int);
void armstrong(int num)
{
    int temp, rem, i;
    double sum = 0;
    temp = num;
    for (i = num; i != 0; i /= 10)
    {
        rem = i % 10;
        sum += pow(rem, 3);
    }

    if (sum == temp)
    {
        printf("%d is an Armstrong number", temp);
    }
    else
    {
        printf("%d is not an Armstrong number", temp);
    }
}