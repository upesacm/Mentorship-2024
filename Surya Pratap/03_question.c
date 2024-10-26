//=> C Program to Sort an Array by Bubble Sort


#include<stdio.h>

void sort(int [],int);

void sort(int array[],int x){

    int temp;

    for (int i = 0; i < x-1; i++)
    {
        for (int j = 0; j < x-i-1; j++)
        {
            if (array[j]<array[j+1])
            {
                temp = array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
            
        }
        
    }

    printf("The sorted array is: ");

    for (int i = 0; i < x; i++)
    {
        printf("%d ",array[i]);
    }
 
}


int main(){
    
    int num;

    printf("Enter the total number you want: ");
    scanf("%d",&num);


    int array[num];

    for (int i = 0; i < num; i++)
    {
        printf("Enter the %d number: ",i+1);
        scanf("%d",&array[i]);
    }
    
    sort(array,num);
    return 0;
}