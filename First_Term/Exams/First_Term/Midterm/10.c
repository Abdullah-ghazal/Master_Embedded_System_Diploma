#include <stdio.h>

int countMaxOnes(int num) {
    int maxCount = 0;
    int currentCount = 0;
    int foundZero = 0;

    while (num != 0) {
        if (num & 1) { 
            currentCount++;
            if (currentCount > maxCount) {
                maxCount = currentCount;
            }
            foundZero = 0; 
        } else { 
            if (foundZero) { 
                currentCount = 0;
            } else {
                foundZero = 1; 
            }
        }
        num >>= 1; 
    }

    return maxCount;
}

int main() {
   
   int num;
   scanf("%d",&num);
   printf("%d",countMaxOnes(num));

    return 0;
}