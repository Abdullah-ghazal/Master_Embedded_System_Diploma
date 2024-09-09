#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("Enter two integers: ");
    int n1, n2;
    fflush(stdout);
    fflush(stdin);
    scanf("%d %d",&n1,&n2);
    printf("Sum: %d\n",n1+n2);
    return 0;
}
