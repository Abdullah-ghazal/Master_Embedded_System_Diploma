
#include "queue.h"

queue_status Queue_init(queue_t* queue_buf, element_type* buf , uint32_t length)
{
    if(queue_buf == NULL)
        return queue_Null;

    else if(buf == NULL)
		return queue_Full;

	queue_buf->base = buf;
	queue_buf->head = buf;
	queue_buf->tail = buf;
	queue_buf->length = length;
	queue_buf->count = 0 ;

    // initialization is done!!
	return queue_No_Error;
}

queue_status Queue_add(queue_t* queue_buf, element_type item)
{
	if(!queue_buf->base || !queue_buf->head || !queue_buf->tail)
		return queue_Null;

	if(Queue_is_full(queue_buf)== queue_Full)
		return queue_Full;

	*(queue_buf->head)=item; // adding the element
	queue_buf->count++;      // incr the counter
    
    // circular properity
	if(queue_buf->head == (queue_buf->base + (queue_buf->length * sizeof(element_type)))) // if the head point to the last element
		queue_buf->head = queue_buf->base; // return the head to point to the start
	else
		queue_buf->head++;

    // adding the element is Done!!
	return queue_No_Error;
}

queue_status Queue_get(queue_t* queue_buf, element_type* item)
{
	if(!queue_buf->base || !queue_buf->head || !queue_buf->tail)
		return queue_Null;
    
	if(Queue_is_empty(queue_buf)== queue_Empty)
		return queue_Empty;

	*item = *(queue_buf->tail);
	queue_buf->count--;
	if(queue_buf->tail == (queue_buf->base + (queue_buf->length * sizeof(element_type)))) // if the tail if point to the last element
		queue_buf->tail = queue_buf->base  ;
	else
		queue_buf->tail++;
    
    // getting the element is Done!!
	return queue_No_Error;
}

queue_status Queue_is_full(queue_t* queue_buf)
{
	if(!queue_buf->base || !queue_buf->head || !queue_buf->tail)
		return queue_Null;

	if(queue_buf->count == queue_buf->length)
		return queue_Full;

	return queue_No_Error;
}

queue_status Queue_is_empty(queue_t* queue_buf)
{
	if(!queue_buf->base || !queue_buf->head || !queue_buf->tail)
		return queue_Null;

	if(queue_buf->count == 0)
		return queue_Empty;

	return queue_No_Error;
}

void Queue_print(queue_t* queue_buf)
{
	element_type* temp;
	element_type i;
	if(Queue_is_empty(queue_buf) == queue_Empty)
		printf("Queue is empty\n");
	else
		temp = queue_buf->tail;

	for(i=0; i<queue_buf->count; i++)
    {
		printf("print from queue: %x \n",*temp);
		temp++;
	}
}
