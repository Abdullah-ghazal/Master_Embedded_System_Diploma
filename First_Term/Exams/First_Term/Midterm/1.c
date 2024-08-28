#include<stdio.h>

int sum_digits(int n);

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    printf("%d",sum_digits(n));
    return 0;
}

int sum_digits(int n)
{
    int sum=0;
    while(n != 0)
    {
        sum+= n%10;
        n /=10;
    }
    
    return sum;
}

