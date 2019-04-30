#include "stack.h"

int is_full(arr_stack *stack){
	if (stack->top == LEN - 1)
		return TRUE;
	else
		return FALSE;

}