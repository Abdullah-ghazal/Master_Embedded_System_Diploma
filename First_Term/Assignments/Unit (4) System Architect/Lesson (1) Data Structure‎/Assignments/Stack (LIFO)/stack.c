
#include "stack.h"

stack_status stack_init(stack_t* stack_buf, element_type* buf, uint32 length)
{
    // check if the stack is valid or not
    if (stack_buf == NULL)
        return stack_Null;
    // check if the stack array is full or not
    else if(buf == NULL)
		return stack_Full;

	stack_buf->base = buf;     
	stack_buf->length = length;
	stack_buf->count = 0 ;
    // initialization is Done!!
	return stack_No_Error;

}




stack_status stack_add(stack_t* stack_buf, element_type item)
{
    
	//	buffer is valid
	if(stack_buf->base == NULL)
		return stack_Null;

	//	buffer is full
	if(stack_is_full(stack_buf) == stack_Full)
		return stack_Full;

	//	add item
	*(stack_buf->base) = item;

	//	next address
	stack_buf->base++;

	//	increment counter
	stack_buf->count++;

    // adding element is Done!!
	return stack_No_Error ;
}


stack_status stack_get(stack_t* stack_buf, element_type* item)
{
    //	buffer is valid
	if(stack_buf->base == NULL)
		return stack_Null;

	if(stack_is_empty(stack_buf) == stack_Empty)
		return stack_Empty;

	stack_buf->base--;
	*item = *(stack_buf->base);
	stack_buf->count--;

	return stack_No_Error;
}

stack_status stack_is_full(stack_t* stack_buf)
{
    if(stack_buf->base == NULL)
		return stack_Null;
	if(stack_buf->count == stack_buf->length)
		return stack_Full;
	return stack_No_Error;
}

stack_status stack_is_empty(stack_t* stack_buf)
{
    if(!stack_buf->base)
		return stack_Null;
	if(stack_buf->count == 0)
		return stack_Empty;
	return stack_No_Error;
}

void stack_print(stack_t* stack_buf)
{
    element_type* temp; // just to print the elements without change the (base) pointer
	element_type i;

	if(stack_is_empty(stack_buf) == stack_Empty)
		printf("stack is empty \n");
	else
		temp = stack_buf->base;


	for(i=0; i<stack_buf->count; i++)
    {
		temp--;
		printf("print from stack: %x \n",*temp);

	}
}

