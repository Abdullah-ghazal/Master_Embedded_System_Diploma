#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("reverse string  using a pointer\n");
    printf("Input a string: \n");
    char str[100];
    scanf("%s",str);
    char* ptr_L;
    char* ptr_R;
    ptr_L = str;
    int i=0;
    while (str[i] != '\0')
    {
        i++;
    }
    ptr_R = &str[i-1];
    
    while (ptr_L <= ptr_R)
    {
        char temp;
        temp = *ptr_L;
        *ptr_L = *ptr_R;
        *ptr_R = temp;
        
        ptr_L++;
        ptr_R--;
    }
    printf("%s\n",str);
    return 0;
}
