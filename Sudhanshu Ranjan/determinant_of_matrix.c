#include <stdio.h>

void orderof2()
{
    int arr[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the value at the position [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The matrix is: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    int det = (arr[0][0] * arr[1][1]) - (arr[0][1] * arr[1][0]);

    printf("The determinant of the matrix of the order 2 X 2 is -> %d",det);
}

void orderof3()
{
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the value at the position [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The matrix is: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    int det = arr[0][0]*((arr[1][1]*arr[2][2])-(arr[1][2]*arr[2][1])) - arr[0][1]*((arr[1][0]*arr[2][2])-(arr[1][2]*arr[2][0])) + arr[0][2]*((arr[1][0]*arr[2][1])-(arr[1][1]*arr[2][0]));

    printf("The determinant of the matrix of the order 3 X 3 is -> %d",det);
}

int main()
{

    int num;
    printf("Enter the order of the matrix you want to find the determinant of: ");
    scanf("%d", &num);
    if (num == 2)
    {
        orderof2();
    }
    else if (num == 3)
    {
        orderof3();
    }
    else
    {
        printf("Sorry currently I am unable to find the determinant of the matrix of order higher than 3.");
    }
    /*Sorry I know that I am not able to find the matrix of order higher that of order 3 but this can be done by 
    reccurssion and taking the base case of the order 2 X 2. But I am unable to code this much at this time but 
     I am eger to learn this*/
    return 0;
}