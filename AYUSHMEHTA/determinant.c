#include <stdio.h>

int determinant (int matrix[3][3]){
    int a= matrix[0][0] ;
    int b = matrix[0][1];
    int c= matrix[0][2];
    int d = matrix[1][0];
    int e= matrix[1][1];
    int f= matrix[1][2];
    int g= matrix[2][0];
    int h = matrix[2][1];
    int i = matrix[2][2];
     return a* (e*i - h*f) -b* (d*i - f*g) +c* (h*d - g*e);

}

int main() {
    int matrix [3][3];
    printf("Enter the elements of the matrix:\n");
    for (int i =0 ; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("Element [%d][%d]:", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    int result= determinant(matrix);
    printf("The determinant of the matrix is: %d\n",result);

        return 0;
    }