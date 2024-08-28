#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter an integer you want to check: ");
    fflush(stdout);
    fflush(stdin);
    scanf("%d",&n);
    if(!(n%2))
    {
        printf("%d is even.\n",n);
    }
    else
    {
        printf("%d is odd.\n",n);
    }
    return 0;
}
