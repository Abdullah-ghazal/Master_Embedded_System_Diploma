#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("Enter a character: ");
    char ch; 
    fflush(stdout);
    fflush(stdin);
    scanf("%c",&ch);
    printf("ASCII value of %c = %d\n",ch,ch);
    return 0;
}
