#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("Write a program in C to demonstrate how to handle the pointers in the program.\n");
    int m = 29;
    int* ptr = &m;
    printf("Address of m: 0x%x\n",ptr);
    printf("Value of m: %d\n",*ptr);
    printf("\n\n");
    printf("Now ab is assigned with the address of m.\n");
    int* ab = &m;
    printf("Address of pointer ab : 0x%x\n",ab);
    printf("Content of pointer ab : %d\n",*ab);
    printf("\n\n");
    printf("The value of m assigned to 34 now.\n");
    m = 34;
    printf("Address of pointer ab : 0x%x\n",ab);
    printf("Content of pointer ab : %d\n",*ab);
    printf("\n\n");
    printf("The pointer variable ab is assigned with the value 7 now.\n");
    *ab = 7;
    printf("Address of m: 0x%x\n",ptr);
    printf("Value of m: %d\n",*ptr);
    return 0;
}
