/**
 * @file armstrong-number.c
 * @author Hasib (mail@muttakinhasib.com)
 * @version 0.1
 * @date 2023-02-27
 * @copyright Copyright (c) 2023
 */

#include <stdio.h>
#include <math.h>

void main()
{
    int num, rem, digit = 0;
    double sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = num; i != 0; i /= 10)
        digit++;

    for (int i = num; i != 0; i /= 10)
    {
        rem = i % 10;
        sum += pow(rem, digit);
    }

    if (num == sum)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not an armstrong number");
    }
}