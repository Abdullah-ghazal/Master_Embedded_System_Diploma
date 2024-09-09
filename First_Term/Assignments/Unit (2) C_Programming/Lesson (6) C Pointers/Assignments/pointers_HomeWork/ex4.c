#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("print the elements of an array in reverse order.\n");

    int n;
    printf("Input the number of elements to store in the array (max 15) :\n");
    scanf("%d",&n);
    printf("Input 5 number of elements in the array :\n");
    int arr[100];
    int* ptr1;
    for (int i = 0; i < n; i++)
    {
        printf("element-%d : ",i+1);
        ptr1 = &arr[i];
        scanf("%d",ptr1);
    }
    printf("==================\n");
    int* ptr;
    for (int i = n-1; i >= 0; i--)
    {
        ptr = &arr[i];
        printf("element-%d : %d\n",i+1,*ptr);
        ptr--;
    }
    
    return 0;
}
