#include<stdio.h>

struct distance
{
    float inch;
    float feet;
};

float sum(float, float);
int main(int argc, char const *argv[])
{
    struct distance d1;
    struct distance d2;
    printf("Enter the information for 1st distance: \n");
    printf("Enter feet: ");
    scanf("%f",&d1.feet);
    printf("Enter inch: ");
    scanf("%f",&d1.inch);
    printf("\n");
    printf("Enter the information for 2nd distance: \n");
    printf("Enter feet: ");
    scanf("%f",&d2.feet);
    printf("Enter inch: ");
    scanf("%f",&d2.inch);
    printf("\n");
    printf("Sum of distances = %.3f",sum(d1.feet,d1.inch) + sum(d2.feet,d2.inch));
    



    return 0;
}
float sum(float f, float i)
{
    return f + i*(0.0833333333);
}

