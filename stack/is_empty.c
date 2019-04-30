#include "stack.h"

int is_empty(arr_stack *stack){
	if (stack->top == -1)
		return TRUE;
	else
		return FALSE;
}