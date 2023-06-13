#include<stdio.h>

//pathetic logic:
/*
int power(int b, int e)
{
    int p = 1;
    for (int i = 0; i < e; i++)
    {
        p = p*b;
    }
    return p;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Reverse: ");
    int c = 0;
    int num = n;
    while (n != 0)
    {
        int temp = n/10;
        n = temp;
        c++;
    }
    int sum = 0;
    for (int i = 1; i <= c; i++)
    {
        int temp = num/10;
        sum = sum + (num - temp*power(10,i)) * power(10,c-i);
        num = temp;
    }
    printf("%d\n",sum);
    */
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int rev = 0;
    int num = n;
    while (n != 0)
    {
        int x = n%10;
        rev = (rev*10) + x;
        n /= 10;
    }
    if (rev == num)
        printf("It is a palindrome.\n");
    else
        printf("%d is not a palindrome.\n",rev);
    return 0;
}
