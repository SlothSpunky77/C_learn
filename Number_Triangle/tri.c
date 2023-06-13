#include<stdio.h>
int main()
{
    //Equilateral number triangle
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for (int i = n; i > 0; i--)
    {
        for (int j = i-1; j > 0; j--)
        {
            printf(" ");
        }
        int a = n-i+1;
        int c = 0;
        while (c < a)
        {
            printf("%d ",a);
            c++;
        }
        printf("\n");
    }
    return 0;
}
