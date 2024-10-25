#include<stdio.h>
#include<stdbool.h>
void swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    return;
}
int main()
{
    int n;
    printf("enter size ");
    scanf("%d",&n);
    int arr[n];
    printf("enter array \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        bool flag=true;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                flag=false;
            }
        }
        if(flag==true)
        {
            break;
        }
    }
    printf("sorted array \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}