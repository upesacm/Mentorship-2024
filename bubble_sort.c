#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements in the array:\n");
    for(int i=0; i<n; i++)
    {
        printf("element[%d]: ",i+1);
        scanf("%d",&arr[i]);
    }
    int temp, swapped;
    for(int i=0; i<n-1; i++)
    {
        swapped=0;
        for(int j=0; j<n-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp=arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=temp;
                swapped=1;
            }
        }
        if(swapped == 0)
        {
            break;
        }

    }
    printf("Sorted array:\n");
    for(int i=0; i<n; i++)
    {
        printf(" %d ",arr[i]);
    }
    printf("\n");
    return 0;
}