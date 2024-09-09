#include <stdio.h>
// definingaunion
union job
{
    char name[32];
    float salary;
    int worker;
} u;

struct jobl
{
    char name[32];
    float salary;
    int worker;
} s;

int main()
{
    printf("size of union = %d\n", sizeof(u));
    printf("size of struct = %d\n", sizeof(s));
    return 0;
}