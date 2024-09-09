#include<stdio.h>
#define PI 3.14
#define Area(R)  R*R*PI 



int main(int argc, char const *argv[])
{
    float r;
    printf("Enter the radius: ");
    scanf("%f",&r);
    printf("Area: %.2f\n",Area(r));
    return 0;
}
