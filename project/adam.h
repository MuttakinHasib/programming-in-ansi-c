#include "reverse.h"

void adam(int);
void adam(int num)
{
    int square, rev_square, rev_num, square_rev_num;
    square = num * num;
    rev_square = reverse(square);
    rev_num = reverse(num);
    square_rev_num = rev_num * rev_num;
    if (rev_square == square_rev_num)
        printf("%d is an Adam number", num);
    else
        printf("%d is not an Adam number", num);
}