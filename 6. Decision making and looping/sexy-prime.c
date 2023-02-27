/**
 * @file sexy-prime.c
 * @author Hasib (mail@muttakinhasib.com)
 * @version 0.1
 * @date 2023-02-27
 * @copyright Copyright (c) 2023
 */

#include <stdio.h>

void main()
{
    int range, n, d, flag, sexy_prime;
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
            sexy_prime = n + 6;
            flag = 0;
            for (d = 2; d <= sexy_prime / 2; d++)
            {
                if (sexy_prime % d == 0)
                {
                    flag++;
                    break;
                }
            }
            if (flag == 0)
            {
                printf("(%d, %d)\n", n, sexy_prime);
            }
        }
    }
}