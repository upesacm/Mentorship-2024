#include<stdio.h>

int main() {
    int m,n;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);
    
    int a[m][n], b[m * n];
    for (int i = 0; i < m * n; i++) 
    {
        b[i] = 0;
    }
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("Enter the elements: ");
            scanf("%d", &a[i][j]);
            b[i * n + j] = a[i][j];
        }
    }
    printf("Matrix is:\n");
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < m * n - 1; i++) 
    {
        for (int j = 0; j < m * n - i - 1; j++) 
        {
            if (b[j] < b[j + 1]) 
            {  
                int temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }
    printf("Descending order is: ");
    for (int i = 0; i < m * n; i++) 
    {
        printf("%d ", b[i]);
    }
    printf("\n");
    for (int i = 0; i < m * n - 1; i++) 
    {
        for (int j = 0; j < m * n - i - 1; j++) 
        {
            if (b[j] > b[j + 1]) 
            {
                int temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }
    printf("Ascending order is: ");
    for (int i = 0; i < m * n; i++) 
    {
        printf("%d ", b[i]);
    }
    printf("\n");
    return 0;
}
