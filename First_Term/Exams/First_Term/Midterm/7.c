#include<stdio.h>
int sum(int);


int main(int argc, char const *argv[])
{
    printf("summition from 1 to 100: %d\n",sum(100));
    return 0;
}
int sum(int n)
{
    int summ;
    summ = n*(n+1)/2;
    return summ;
}
