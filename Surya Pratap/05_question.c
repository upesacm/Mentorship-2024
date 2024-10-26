//=> C Program to Find the Determinant of a Matrix


#include<stdio.h>

int main(){
    int num;
    printf("Enter the 2 for (2x2) Matrix 3 for (3x3) Matrix: ");
    scanf("%d",&num);

    while (num != 2 && num != 3)
    {
        printf("Please enter a valid input! (Only 2 or 3).\n");
        printf("Enter the 2 for (2x2) Matrix 3 for (3x3) Matrix: ");
        scanf("%d",&num);
    }


    if (num == 2)
    {
        float matrix[2][2];

        float determinant;

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                printf("Enter the value of a%d%d: ", i+1,j+1);
                scanf("%f",&matrix[i][j]);
            }
            
        }


        determinant = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);

        printf("Enter determinant of given matrix is: %.2f", determinant);
    
        return 0;

    }
    
    if (num == 3)
    {
        float matrix[3][3];

        float determinant;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                
                printf("Enter the value of a%d%d: ",i+1,j+1);
                scanf("%f",&matrix[i][j]);
               
            }
            
        }
        

        determinant =   matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) 
                      - matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) 
                      + matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);


        printf("The determinant for given 3x3 matrix is: %.2f",determinant);


    }
    


    return 0;
}