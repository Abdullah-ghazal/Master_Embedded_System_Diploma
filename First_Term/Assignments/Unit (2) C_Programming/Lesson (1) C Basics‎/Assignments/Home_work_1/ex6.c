#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("Enter value of a: ");
    float a; 
    fflush(stdout);
    fflush(stdin);
    scanf("%f",&a);
    printf("Enter value of b: ");
    float b; 
    fflush(stdout);
    fflush(stdin);
    scanf("%f",&b);
    printf("\n");
    float temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping, value of a = %.2f\n",a);
    printf("After swapping, value of b = %.2f\n",b);
    return 0;
}
