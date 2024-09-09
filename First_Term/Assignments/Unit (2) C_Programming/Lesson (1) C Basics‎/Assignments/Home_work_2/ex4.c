#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("Enter a number: ");
    float n;
    fflush(stdout);
    fflush(stdin);
    scanf("%f",&n);
    if(n > 0)
        printf("%f is positive.",n);
    else if(n < 0)
        printf("%f is negative.",n);
    else
        printf("%f is zero.",n);
    return 0;
}
