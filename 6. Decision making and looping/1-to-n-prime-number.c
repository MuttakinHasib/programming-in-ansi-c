#include <stdio.h>

void main()
{
    int range, n, d, flag;
    printf("Enter the range: ");
    scanf("%d", &range);

    for (n = 1; n <= range; n++)
    {
        flag = 0;
        for (d = 2; d <= n / 2; d++)
        {
            if (n % d == 0)
            {
                flag++;
                break;
            }
        }
        if (n != 1 && flag == 0)
        {
            printf("%d\n", n);
        }
    }
}