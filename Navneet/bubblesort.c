#include <stdio.h>

int main() 
{
    int n, i, j, t;
        
    printf("Enter the no of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++) 
    {
        for (j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
 
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }


    printf("Sorted array:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d \n", arr[i]);
    }
    return 0;
}