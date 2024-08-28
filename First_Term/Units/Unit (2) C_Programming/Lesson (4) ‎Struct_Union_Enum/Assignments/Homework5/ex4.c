#include<stdio.h>

struct student
{
    char name[100];
    int roll;
    float marks;
};

int main(int argc, char const *argv[])
{
    struct student x[10];
    printf("Enter information of students: ");
    for (int i = 0; i < 10; i++)
    {
        printf("For roll %d\n",i+1);
        printf("Enter name: ");
        scanf("%s",&x[i].name); 
        printf("Enter marks: ");    
        scanf("%f",&x[i].marks);
    }
        printf("\n");
    


    printf("Displaying Information of  students: \n");
    for (int i = 0; i < 9; i++)
    {
        printf("information for roll number %d: \n",i+1);
        printf("name: %s\n",x[i].name);
        printf("marks: %.2f\n",x[i].marks);
    }
    


    return 0;
}
