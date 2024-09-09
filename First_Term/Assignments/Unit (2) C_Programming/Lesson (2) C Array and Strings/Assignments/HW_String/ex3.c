#include<stdio.h>
#include<string.h>
#define SIZE 100
int main(int argc, char const *argv[])
{
    char s[SIZE];
    printf("Enter the string: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%s",s);
    char s2[SIZE];

    int p1=0, p2=strlen(s)-1;
    while (p1 <strlen(s))
    {
        s2[p1] = s[p2];
        p1++;
        p2--;
    }
    
    
    printf("Reverse string is: %s\n",s2);

    
    return 0;
}
