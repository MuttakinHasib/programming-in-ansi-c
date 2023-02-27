#include <stdio.h>

int main()
{
    int number;
    float amount, sum;

    number = 100;
    amount = number + 20.5;
    sum = number + amount;

    printf("The number is %d and the amount is %f and the summation is: %0.3f", number, amount, sum);
    return 0;
}