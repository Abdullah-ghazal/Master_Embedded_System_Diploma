#include <stdio.h>

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    int temp;

    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main() {
    int size;
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
    printf("}\n");

    reverseArray(arr, size);

    printf("Reversed array: \n");
    printf("int a[%d]={",size);
    for (int i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
        printf(",");
    }
    printf("}\n");

    return 0;
}
