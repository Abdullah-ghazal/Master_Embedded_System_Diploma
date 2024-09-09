#include<stdio.h>
#define SIZE 100
int main(int argc, char const *argv[])
{
    char s[SIZE];
    printf("Enter the string: ");
    scanf("%s",s);
    int i = 0;
    while (s[i] != 0)
    {
        i++;
    }
    printf("Length of the string: %d\n",i);

    
    return 0;
}
