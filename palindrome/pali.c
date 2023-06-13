#include<stdio.h>
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
