#include<stdio.h>
int main()
{
  int mat[3][3] , i , j , determinant ;
  printf("Enter the elements of the matrix:\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("Element [%d][%d]:\t", i, j);
      scanf("%d", &mat[i][j]);
    }
  }
  printf("The given matrix is:\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("%d\t", mat[i][j]);
    }
    printf("\n");
  }
  determinant = (mat[0][0]*((mat[1][1] * mat[2][2]) -(mat[1][2] * mat[2][1]))
  -mat[0][1]*((mat[1][0] * mat[2][2]) -(mat[1][2] * mat[2][0]))+mat[0][2]*((mat[1][0] * mat[2][1]) -(mat[1][1] * mat[2][0])));
  printf("The determinant of the given matrix is:%d", determinant);
}

