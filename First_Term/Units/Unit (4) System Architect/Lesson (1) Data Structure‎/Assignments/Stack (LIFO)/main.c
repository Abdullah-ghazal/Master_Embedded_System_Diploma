/*
 ============================================================================
 Name        : Stack.c
 Author      : Abdullah ghazal
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "stack.c"

int main(void) {

	element_type i, data;

		stack_t uart_stack;

		if( stack_init(&uart_stack,uart_stack_buf,5) == stack_No_Error)
			printf("stack initialized\n");

		for(i=0;i<sizeof(uart_stack_buf)+2;i++)
        {
			if(stack_add(&uart_stack , i) == stack_No_Error )
            {
				printf("add (%d) in stack done\n",i);
			}
            else
				printf("add (%d) in stack failed\n",i);
		}

		stack_print(&uart_stack);

		if(stack_get(&uart_stack,&data) == stack_No_Error)
			printf("get data from stack: %x \n",data);

		if(stack_get(&uart_stack,&data) == stack_No_Error)
			printf("get data from stack: %x \n",data);

		if(stack_get(&uart_stack,&data) == stack_No_Error)
				printf("get data from stack: %x \n",data);

		if(stack_get(&uart_stack,&data) == stack_No_Error)
				printf("get data from stack: %x \n",data);
                
		if(stack_get(&uart_stack,&data) == stack_No_Error)
				printf("get data from stack: %x \n",data);
                
		if(stack_get(&uart_stack,&data) == stack_No_Error)
				printf("get data from stack: %x \n",data);
		stack_print(&uart_stack);
}