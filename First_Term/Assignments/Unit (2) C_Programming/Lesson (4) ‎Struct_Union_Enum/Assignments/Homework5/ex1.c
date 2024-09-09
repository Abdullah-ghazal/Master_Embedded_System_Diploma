#include<stdio.h>

struct student
{
    char name[100];
    int roll;
    float marks;
};

int main(int argc, char const *argv[])
{
    struct student x;
    printf("Enter name: ");
    scanf("%s",&x.name);
    printf("Enter roll number: ");
    scanf("%d",&x.roll);
    printf("Enter marks: ");
    scanf("%f",&x.marks);
    printf("\n");
    printf("Displaying Information: \n");
    printf("name: %s\n",x.name);
    printf("roll: %d\n",x.roll);
    printf("marks: %.2f\n",x.marks);


    return 0;
}
