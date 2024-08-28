#include <stdio.h>
#include <string.h>

void reverseString(char* start, char* end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void reverseWords(char* str) {
    char* word_start = str;
    char* temp = str;

    while (*temp) {
        temp++;
        if (*temp == '\0' || *temp == ' ') {
            reverseString(word_start, temp - 1);
            word_start = temp + 1;
        }
    }

    reverseString(str, temp - 1);
}


int main() {
    char str[100];
    gets(str);

    reverseWords(str);
    
    printf("%s\n", str);
    
    return 0;
}
