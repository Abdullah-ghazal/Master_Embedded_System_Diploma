#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("Enter two numbers: ");
    float n1, n2;
    fflush(stdout);
    fflush(stdin);
    scanf("%f %f",&n1,&n2);
    printf("Sum: %f\n",n1*n2);
    return 0;
}
