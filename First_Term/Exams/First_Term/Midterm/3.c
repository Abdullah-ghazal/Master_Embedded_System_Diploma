#include<stdio.h>

int isPrime(int num);

int main(int argc, char const *argv[])
{
    int n1,n2;
    printf("n1=");
    scanf("%d",&n1);
    printf("n2=");
    scanf("%d",&n2);
    for (int i = n1; i <= n2; i++)
    {
        if(isPrime(i))
        {
            printf("%d ",i);
        }
    }
    printf("\n");
    
    return 0;
}

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}