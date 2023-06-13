#include<stdio.h>
int prime(int n)
{
    int c = 0;
    for (int i = 1; i <= (n/2); i++)
    {
        if (n%i == 0)
            c++;
    }
    if (c == 1)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (prime(n))
    {
        printf("It is a prime number.\n");
        n += 1;
        while (prime(n) != 1)
            n++;
        printf("%d is the next prime number.\n",n);
    }
    else
    {
        printf("It is not a prime number.\n");
        return 0;
    }
    return 0;
}
