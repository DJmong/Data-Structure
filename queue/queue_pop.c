#include "queue.h"
#include <stdio.h>

int is_empty(q_arr *q);
int queue_pop(q_arr *q){

	if (is_empty(q) == TRUE) printf("empty!\n");
	else{
		q->front += 1;
		return q->arr[q->front];
	}
	return -1;
}