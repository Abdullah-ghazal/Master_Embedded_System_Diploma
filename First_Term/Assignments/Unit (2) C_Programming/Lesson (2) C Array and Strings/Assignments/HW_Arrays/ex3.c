#include<stdio.h>
#define SIZE 100
int main(int argc, char const *argv[])
{
    int a[SIZE][SIZE];
    int r,c; 
    printf("Enter row and column of matrix: ");
    scanf("%d",&r);
    scanf("%d",&c);

    printf("Enter the elements of the matrix: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter elements a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
        
    }

    printf("Entered Matrix: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
        
    }
    printf("Transpose of Matrix: \n");
    for (int j = 0; j < c; j++)
    {
        for (int i = 0; i < r; i++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
        
    }
    
    
        
    return 0;
}
