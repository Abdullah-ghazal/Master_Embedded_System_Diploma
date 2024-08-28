#include<stdio.h>
#define SIZE 100
int main(int argc, char const *argv[])
{
    int a[SIZE];
    printf("Enter no of elements: ");
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements to be searched: ");
    int x;
    scanf("%d",&x);

    int i;
    for (i = 0; i < n; i++)
    {
        if(a[i] == x)
            break;
    }
    
    printf("Number found at the location = %d\n",i+1);
    

        
    return 0;
}
