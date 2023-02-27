#include <stdio.h>
#include <math.h>

int reverse(int num)
{
    int i, rem, reverse = 0;
    for (i = num; i != 0; i /= 10)
    {
        rem = i % 10;
        reverse = reverse * 10 + rem;
    }
    return reverse;
}

void main()
{
    int num, range, square_of_num, square_of_reversed_num;

    printf("Enter the range: ");
    scanf("%d", &range);

    for (num = 0; num <= range; num++)
    {
        square_of_num = (num * num);
        square_of_reversed_num = reverse(num) * reverse(num);

        if (square_of_num == reverse(square_of_reversed_num))
        {
            printf("%d\n", num);
        }
    }
}