#include <stdio.h>
#include <math.h>

void main()
{
    int num, range;
    double sunny;

    printf("Enter the range: ");
    scanf("%d", &range);

    printf("sunny numbers are:\n");
    for (num = 1; num <= range; num++)
    {
        sunny = sqrt(num + 1);
        if (sunny == (int)sunny)
        {
            printf("%d\n", num);
        }
    }
}