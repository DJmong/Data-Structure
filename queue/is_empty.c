#include "queue.h"

int is_empty(q_arr *q){
	if (q->front==q->rear) return TRUE;

	else return FALSE;
}