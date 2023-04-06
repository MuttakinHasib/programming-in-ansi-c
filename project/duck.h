void duck(int);
void duck(int num)
{
    int i, rem, flag = 0;
    for (i = num; i != 0; i /= 10)
    {
        rem = i % 10;
        if (rem == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("%d is a Duck Number", num);
    else
        printf("%d is not a Duck Number", num);
}