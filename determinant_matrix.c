#include <stdio.h>
int det_matrix(int matrix[3][3]);
int main()
{
    int a[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the element at position (%d,%d): ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    int determinant=det_matrix(a);
    printf("Determinant of Matrix is:%d\n",determinant);
    return 0;
}
int det_matrix(int matrix[3][3])
{
    int det = 0;
    for (int i = 0; i < 3;i++)
    {
        det += matrix[0][i] * (matrix[1][(i + 1) % 3] * matrix[2][(i + 2) % 3] - matrix[1][(i + 2) % 3] * matrix[2][(i + 1) % 3]);
    }
        return det;
}
