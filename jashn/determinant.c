#include <stdio.h>
int main()
{  
    
    int a[3][3];
        int i,j;

        // entering the value in the determinant

         printf("enter the elements of first matrix:");        
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++){
                scanf("%d",&a[i][j]);
            }
            printf("\n");
        }

        //showing the elements given by user in a matrix
        printf("matrices entered\n");        
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++){
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
 
        int det;
        det= a[0][0]*((a[1][1]*a[2][2])-(a[1][2]*a[2][1]))-            //determinant
             a[0][1]*((a[1][0]*a[2][2])-(a[1][2]*a[2][0]))+
             a[0][2]*((a[1][0]*a[2][1])-(a[1][1]*a[2][0]));
        printf("%d",det);
        return 0;
}
        
