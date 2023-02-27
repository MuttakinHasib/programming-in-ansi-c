#include <stdio.h>

void main()
{
    int n, f = 0;
    printf("Enter a number");
    scanf("%d", &n);

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            f++;
            break;
        }
    }
    if (f == 0)
    {
        printf("Prime number");
    }
    else
    {
        printf("Not a prime number");
    }
}