#include <stdio.h>
#include <stdlib.h>
#include "prime.h"
#include "palindrome.h"
#include "armstrong.h"
#include "strong.h"
#include "adam.h"
#include "sunny.h"
#include "duck.h"
#include "automorphic.h"
#include "strange.h"

int main(void)
{
    int select, num;
number_checker:
    printf("\n=================== Welcome to the number checker! ===================\n\n");
    printf("Please enter: \n");
    printf("1 for Prime Number\n2 for Palindrome Number\n3 for Armstrong Number\n4 for Strong Number\n5 for Adam Number\n6 for Sunny Number\n7 for Duck Number\n8 for Automorphic Number\n9 for Strange Number\n0 for Exit the program\n");
    printf("\nSelect: ");
    scanf("%d", &select);

    if (select > 9)
    {
        printf("Invalid Input");
        goto number_checker;
    }
    if (select == 0)
    {
        printf("Thank you for using the number checker!\n");
        exit(0);
    }
    printf("\nEnter the number: ");
    scanf("%d", &num);

    switch (select)
    {
    case 1:
        prime(num);
        break;
    case 2:
        palindrome(num);
        break;
    case 3:
        armstrong(num);
        break;
    case 4:
        strong(num);
        break;
    case 5:
        adam(num);
        break;
    case 6:
        sunny(num);
        break;
    case 7:
        duck(num);
        break;
    case 8:
        automorphic(num);
        break;
    case 9:
        strange(num);
        break;
    default:
        printf("Invalid Input");
        break;
    }
    goto number_checker;
    return 0;
}