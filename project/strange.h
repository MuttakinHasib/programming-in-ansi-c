void strange(int);
void strange(int n)
{
    int i, c = 0, rem, j;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }
    if (c == 0)
    {
        for (i = n; i != 0; i = i / 10)
        {
            rem = i % 10;
            for (j = 2; j < rem; j++)
            {
                if (rem % j == 0)
                {
                    c++;
                    break;
                }
            }
        }
        if (c == 0)
        {
            printf("%d is A Strange Number.\n", n);
        }
        else
        {
            printf("%d is Not A Strange Number.\n", n);
        }
    }
    else
    {
        printf("%d is Not A Strange Number.\n", n);
    }
}