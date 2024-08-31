#ifndef STACK_H_
#define STACH_H_


#include"Platform_Types.h"

#define element_type uint8_t // identify the size of element
#define size         5       // identify the number of elements

// create the stack memory
element_type uart_stack_buf[size];

// stack creation and its members
typedef struct {
    uint32 length;        // the number of elements of the stack
    uint32 count;         // to count the current number of elements
    element_type* base;   // to point to the start of the stack
}stack_t;

// to return the difference statuses of the stack operations
typedef enum {
    stack_No_Error,
    stack_Full,
    stack_Empty,
    stack_Null
}stack_status;


stack_status stack_init(stack_t* stack_buf, element_type* buf, uint32 length);
stack_status stack_add(stack_t* stack_buf, element_type item);
stack_status stack_get(stack_t* stack_buf, element_type* item);
stack_status stack_is_full(stack_t* stack_buf);
stack_status stack_is_empty(stack_t* stack_buf);
void stack_print(stack_t* stack_buf);












#endif
