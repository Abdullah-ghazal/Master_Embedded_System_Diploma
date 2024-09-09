#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("Enter operator either + or - or * or / : ");
    char op;
    scanf("%c",&op);
    float a, b;
    float res;
    scanf("%f %f",&a,&b);
    switch (op)
    {
        case ('+'):
        {
            res = a + b;
            printf("%f %c %f = %f",a,op,b,a+b);
            break;
        }
        case ('-'):
        {
            res = a - b;
            printf("%f %c %f = %f",a,op,b,a-b);
            break;
        }
        case ('*'):
        {
            res = a * b;
            printf("%f %c %f = %f",a,op,b,a*b);
            break;
        }
        case ('/'):
        {
            res = a / b;
            printf("%f %c %f = %f",a,op,b,a/b);
            break;
        }
        default:
        {

        }
    }
    
    return 0;
}
