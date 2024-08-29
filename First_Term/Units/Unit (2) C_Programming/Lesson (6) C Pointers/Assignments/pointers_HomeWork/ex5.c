#include<stdio.h>



typedef struct employee
    {
        char *emp_name;
        int emp_id;
    }employee_t;


int main(int argc, char const *argv[])
{
    printf("show a pointer to an array which contents are pointer to structure.\n");
    
    static employee_t emp1={"Abdullah",1001}, emp2={"Mohammed",1002}, emp3={"Ahmed",1003};
    // array of pointers to emp1, emp2 and emp3 (struct type)
    employee_t (*arr[]) = {&emp1, &emp2, &emp3};
    //pointer to array of 3 pointers to arr of employee type
    employee_t (*(*pt)[3]) = &arr;

    
    printf("Employee Name: %s\n",   (**(*pt+1)).emp_name  );


    printf("Employee ID: %d\n",   (**(*pt+1)).emp_id  );

    

    
    return 0;
}
