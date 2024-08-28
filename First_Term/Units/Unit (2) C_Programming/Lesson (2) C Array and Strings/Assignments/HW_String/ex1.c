#include<stdio.h>
#define SIZE 100
int main(int argc, char const *argv[])
{

    printf("Enter the string: ");
    char s[SIZE];
    gets(s);
    printf("Enter a character to find frequency: ");
    char ch;
    fflush(stdin);
    fflush(stdout); 
    ch = getchar();
    int cntr = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == ch)
            cntr++;
    }
    printf("Frequency of %c = %d\n",ch,cntr);
    return 0;
}
