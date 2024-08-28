#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("Enter an integer: ");
    int n;
    fflush(stdout);
    fflush(stdin);
    scanf("%d",&n);
    int sum = 0;
    for (int i = n; i >= 0; i--)
    {
        sum+=i;
    }
    printf("Sum = %d\n",sum);
    
    return 0;
}
