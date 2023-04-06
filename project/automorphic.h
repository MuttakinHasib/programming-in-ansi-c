#include <math.h>

int count(int num)
{
    int count = 0;
    while (num != 0)
    {
        num /= 10;
        count++;
    }
    return count;
}

void automorphic(int);
void automorphic(int num)
{

    int i, a, d, b;
    a = num * num;

    d = pow(10, count(num));
    b = a % d;

    if (b == num)
    {
        printf("%d is an Automorphic Number.\n", num);
    }
    else
    {
        printf("%d is Not an Automorphic Number.\n", num);
    }
}