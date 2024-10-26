#include<stdio.h>

void main()
{
    int a[3][3],b[2][2],d[3],f,y=0,z;
    printf("Enter elements\n");
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
        scanf("%d",&  a[i][j]);
        }
    }
    
    for(int k=0;k<3;k++)
    {
        y=0;
        //here
        for(int i=0;i<3;i++)
        {
            z=0;
            for(int j=0;j<3;j++)
            {
                if (j!=k||i!=0)
                {
                    b[y][z]=a[i][j];
                    z++;
                }
            }
            if (i!=0)
                y++;
        }
        d[k]=a[0][k]*((b[0][0]*b[1][1])-(b[1][0]*b[0][1]));
    }
    f=d[0]-d[1]+d[2];
    printf("Determinant %d\n",f);
}
