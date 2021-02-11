#include "queue.h"

int is_full(q_arr *q);
void queue_push(q_arr *q, int val){

	if (is_full(q) == TRUE) printf("full!\n");
	else{
		q->rear=q->rear+1;
		q->arr[q->rear] = val;
	}
}