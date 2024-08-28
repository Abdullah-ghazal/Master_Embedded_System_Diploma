#include<stdio.h>

int countOnes(unsigned int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main(int argc, char const *argv[])
{
    int num;
    scanf("%d",&num);
    printf("%d",countOnes(num));
    return 0;
}
