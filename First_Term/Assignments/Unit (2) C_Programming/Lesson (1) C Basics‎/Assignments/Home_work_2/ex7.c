#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("Enter an integer: ");
    int n;
    fflush(stdout);
    fflush(stdin);
    scanf("%d",&n);
    int fact = 1;
    if(n < 0)
    {
        printf("Error! !! Factorial of negative number doesn't exist.\n");
        return 0;
    }

    for (int i = n; i >= 1; i--)
    {
        fact*=i;
    }
    printf("Factorial = %d\n",fact);
    
    return 0;
}
