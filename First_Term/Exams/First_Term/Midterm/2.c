#include<stdio.h>
#include<math.h>

void sqr(float*);
int main(int argc, char const *argv[])
{
    float num;
    scanf("%f",&num);
    sqr(&num);
    printf("%.3f",num);

    return 0;
}

void sqr(float* n)
{
    *n = sqrt(*n);
}
