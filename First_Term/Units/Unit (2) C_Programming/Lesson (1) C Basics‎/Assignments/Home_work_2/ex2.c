#include<stdio.h>

int main(int argc, char const *argv[])
{
    char ch;
    printf("Enter an alphabet: ");
    fflush(stdout);
    fflush(stdin);
    scanf("%c",&ch);
    if(ch == 'a' || ch == 'e' || ch == 'o' ||  ch == 'i' ||ch == 'u')
    {
        printf("%c is a vowel.\n",ch);
    }
    else
    {
        printf("%c is a consonant.",ch);
    }
    return 0;
}
