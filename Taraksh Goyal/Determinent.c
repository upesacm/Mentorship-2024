#include<stdio.h>
int main()
{
    int arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int d=arr[0][0]*(arr[1][1]*arr[2][2]-arr[2][1]*arr[1][2])-arr[0][1]*(arr[1][0]*arr[2][2]-arr[2][0]*arr[1][2])+arr[0][2]*(arr[1][0]*arr[2][1]-arr[2][0]*arr[1][1]);
    printf("the determinent of the given array is %d",d);
    return 0;
}