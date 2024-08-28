#include<stdio.h>
#include<stdbool.h>

bool is_prime(int n);

int main(int argc, char const *argv[])
{
    int n1,n2;
    printf("Enter Two numbers(interval): ");
    scanf("%d %d",&n1,&n2);
    printf("prime numbers between %d and %d are:",n1,n2);
    for (int i = n1; i <= n2; i++)
    {
        if(is_prime(i))
            printf("%d ",i);
    }
    
    return 0;
}


bool is_prime(int n)
{
    if(n <= 1)
        return false;


    for (int i = 2; i < n; i++)
    {
        if(n%i == 0)
            return false;
    }

    return true;
    
}
