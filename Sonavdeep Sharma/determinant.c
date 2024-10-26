#include<stdio.h>

int main()
{
    int a[2][2], i, j;
    long determinant;
    printf("Enter the 4 elements of the array\n");
    for(i = 0; i < 2; i++)
    for(j = 0; j < 2; j++)
    scanf("%d", &a[i][j]);
    printf("\nThe entered matrix is: \n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d", a[i][j]); 
        }
        printf("\n"); 
    }
    determinant = a[0][0]*a[1][1] - a[1][0]*a[0][1];
    printf("\nDterminant of 2x2 matrix is : %ld - %ld =  %ld", a[0][0]*a[1][1], a[1][0]*a[0][1], determinant);

    return 0;
}
