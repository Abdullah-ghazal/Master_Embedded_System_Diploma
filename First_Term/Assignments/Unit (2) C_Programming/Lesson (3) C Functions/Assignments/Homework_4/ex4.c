#include<stdio.h>
int power(int n, int k);
int main(int argc, char const *argv[])
{
    printf("Enter the base number: ");
    int b;
    scanf("%d",&b);
    printf("Enter the power number(positive integer): ");
    int p;
    scanf("%d",&p);
    printf("%d^%d = %d\n",b,p,power(b,p));
    return 0;
}

int power(int n, int k)
{

    if(k>1)
        return n*power(n,k-1);
}  

