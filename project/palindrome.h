void palindrome(int);
void palindrome(int num)
{
    int i, temp, rem, rev = 0;
    temp = num;
    for (i = num; i != 0; i /= 10)
    {
        rem = i % 10;
        rev = rev * 10 + rem;
    }
    if (temp == rev)
        printf("%d is a palindrome number", num);
    else
        printf("%d is not a palindrome number", num);
}