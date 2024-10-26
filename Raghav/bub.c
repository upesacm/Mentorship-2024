#include <stdio.h>
void main() 
{
    printf("Enter the value of n");
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n-1;i++) 
    {
        for (int j=0;j<n-i-1;j++) 
        {
            if (a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("Sorted aay: \n");
    for (int i=0;i<n;i++) 
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
