#include<stdio.h>
#define SIZE 100
int main(int argc, char const *argv[])
{
    int a[SIZE];
    int n;
    printf("Enter no of elements: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int x; 
    printf("Enter the element to be inserted: ");
    scanf("%d",&x);
    int loc;
    printf("Enter the location: ");
    scanf("%d",&loc);
    loc--;
    int b[SIZE] = {0};
    for (int i = 0; i < loc; i++)
    {
        b[i] = a[i];  
    }
    b[loc] = x;
    for (int i = loc+1; i < n+1; i++)
    {
        b[i] = a[i-1];  
    }
    
    for (int i = 0; i < n+1; i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");

        
    return 0;
}
