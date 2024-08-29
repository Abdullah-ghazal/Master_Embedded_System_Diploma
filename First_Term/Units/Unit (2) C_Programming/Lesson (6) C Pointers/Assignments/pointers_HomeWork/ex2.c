#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("Write a program in C to print all the alphabets using a pointer. Go to the editor\n");
    
    char *ptr;
    *ptr = 'A';
    
    printf("The Alphabets are : \n");
    for (int i = 0; i < 26; i++)
    {
        *ptr = 'A' + i;
        printf("%c ",*ptr);
        ptr++;
    }
    
    
    return 0;
}
