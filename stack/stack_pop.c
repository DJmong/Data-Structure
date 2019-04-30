#include "stack.h"

int is_empty(arr_stack *stack);
int stack_pop(arr_stack *stack){
	int val;
	if (is_empty(stack) == FALSE){
		val = stack->Arr[stack->top];
		(stack->top)--;
		return val;
	}
	else{
		printf("empty!!\n");
		return -1;
	}
}
