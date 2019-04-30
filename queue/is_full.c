#include "queue.h"

int is_full(q_arr *q){
	if (q->rear == LEN-1) return TRUE;

	else return FALSE;
}