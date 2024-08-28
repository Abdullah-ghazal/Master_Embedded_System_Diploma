#include <stdio.h>

int findUniqueNumber(int arr[], int size) {
    int unique = 0;
    for (int i = 0; i < size; i++) {
        unique ^= arr[i];
    }
    return unique;
}

int main() {
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    


    printf("int a[%d]={",size);
    for (int i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
        printf(",");
    }
    printf("};\n");

    printf("%d",findUniqueNumber(arr, size));

    
    return 0;
}