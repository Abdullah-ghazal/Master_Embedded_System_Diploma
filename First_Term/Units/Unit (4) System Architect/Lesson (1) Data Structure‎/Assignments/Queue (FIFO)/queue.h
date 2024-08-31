
#ifndef QUEUE_H_
#define QUEUE_H_

#include "Platform_Types.h"

// set element type
#define element_type uint8_t
#define size 5

// create the queue memory
element_type uart_queue_buf[size];

// queue creation and its members
typedef struct {
	unsigned int length; // the number of elements of the queue
	unsigned int count; // to count the current number of elements
	element_type* base; // to point to the start of the queue
	element_type* head; // to point to the front of the queue
	element_type* tail; // to point to the back of the queue
}queue_t;


// to return the difference statuses of the queue operations
typedef enum{
	queue_No_Error,
	queue_Full,
	queue_Empty,
	queue_Null
}queue_status;

// operations of the queue
queue_status Queue_init(queue_t* queue_buf, element_type* buf , uint32_t length);
queue_status Queue_add(queue_t* queue_buf, element_type item);
queue_status Queue_get(queue_t* queue_buf, element_type* item);
queue_status Queue_is_full(queue_t* queue_buf);
queue_status Queue_is_empty(queue_t* queue_buf);
void Queue_print(queue_t* queue_buf);


#endif /* QUEUE_H_ */