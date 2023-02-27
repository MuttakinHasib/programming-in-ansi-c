/**
 * @file 1-to-n-armstrong-number.c
 * @author Hasib (mail@muttakinhasib.com)
 * @version 0.1
 * @date 2023-02-27
 * @copyright Copyright (c) 2023
 */

#include <stdio.h>
#include <math.h>

void main()
{
    int range, num, rem, digit;
    double sum;

    printf("Enter the range: ");
    scanf("%d", &range);

    for (num = 1; num <= range; num++)
    {
        digit = 0;
        sum = 0;
        for (int i = num; i != 0; i /= 10)
            digit++;

        for (int i = num; i != 0; i /= 10)
        {
            rem = i % 10;
            sum += pow(rem, digit);
        }

        if (num == sum)
        {
            printf("%0.0lf\n", sum);
        }
    }
}