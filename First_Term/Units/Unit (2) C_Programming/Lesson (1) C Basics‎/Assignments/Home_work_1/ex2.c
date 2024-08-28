#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("Enter a integer: ");
    int x; 
    fflush(stdout);
    fflush(stdin);
    scanf("%d",&x);
    printf("You entered: %d\n",x);
    return 0;
}
