#include<stdio.h>

int reverseDigits(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}

int main() {
    int number;
    scanf("%d",&number);
    printf("%d\n",reverseDigits(number));
    return 0;
}