#include<stdio.h>

int fact(int n);
int main(int argc, char const *argv[])
{
    int n; 
    printf("Enter an positive integer: ");
    scanf("%d",&n);
    printf("Factotial of %d = %d\n",n,fact(n));
    return 0;
}
int fact(int n)
{
    if(n<=0)
        return 1;
    
    return n*fact(n-1);
}

