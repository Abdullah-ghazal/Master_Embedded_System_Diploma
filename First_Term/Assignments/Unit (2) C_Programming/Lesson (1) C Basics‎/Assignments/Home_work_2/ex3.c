#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("Enter three numbers: ");
    float a,b,c;
    fflush(stdout);
    fflush(stdin);
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    
    printf("Largest number = %f\n",(a>b)? ((a>c)? (a) : (c)) : ((b>c)? (b) : (c)));

    return 0;
}
