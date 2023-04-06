#include <math.h>

void sunny(int);
void sunny(int num)
{
    double square = sqrt(num + 1);

    if ((square - floor(square)) == 0)
        printf("%d is a sunny number", num);
    else
        printf("%d is not a sunny number", num);
}