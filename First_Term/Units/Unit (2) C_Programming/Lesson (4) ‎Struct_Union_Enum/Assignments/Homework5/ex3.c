#include<stdio.h>

struct complex
{
    float real;
    float imag;
};


int main(int argc, char const *argv[])
{
    
struct complex n1;
struct complex n2;
printf("For 1st complex number: ");
printf("Enter real and imaginary respectively: ");
scanf("%f %f",&n1.real, &n1.imag);
printf("\n");
printf("For 2st complex number: ");
printf("Enter real and imaginary respectively: ");
scanf("%f %f",&n2.real, &n2.imag);

printf("sum: %.2f+%.2fi\n",n1.real+n2.real , n1.imag+n2.imag);
    



    return 0;
}

