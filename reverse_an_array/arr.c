#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of array elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements:\n");
  
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
  
    for (int i = 0; i < n/2; i++)
    {
        int temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
  
    printf("Reversed array: ");
  
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
  
    printf("\n");
    printf("Reverse it back using pointer notation:\n");
    int *beg = a;
    int *end = a+n-1;
  
    while (beg != end)
    {
        int temp = *beg;
        *beg = *end;
        *end = temp;
        beg++;
        end--;
    }
  
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
  
    printf("\n");
    return 0;

}
