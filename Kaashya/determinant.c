
#include<stdio.h>
int main()
{
    int mat[3][3];
    int i,j,det;
     printf("\n enter the elemrnts for matrix :\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("Element[%d][%d]\t",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("this is the required matrix\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    
    det=mat[0][0]*(mat[1][1]*mat[2][2]-mat[1][2]*mat[2][1])
    -mat[0][1]*(mat[1][0]*mat[2][2]-mat[2][0]*mat[1][2])
    +mat[0][2]*(mat[1][0]*mat[2][1]-mat[2][0]*mat[1][1]);
    printf("determinant of the matrix is %d",det);
    return 0;
}
