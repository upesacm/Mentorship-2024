#include <stdio.h>
int main()
{
   int matrix[2][2];
   int det;
   printf("Enter the elements of the 2 x 2 matrix:\n");
   for(int i=0; i<2; i++)
   {
        for(int j=0; j<2; j++)
        {
            printf("element [%d][%d]:",i+1, j+1);
            scanf("%d",&matrix[i][j]);
        }
   }
   det = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);

   printf("Determinant:%d\n",det);
   return 0;
}