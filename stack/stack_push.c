#include "stack.h"

int is_full(arr_stack *stack);
void stack_push(arr_stack *stack, int val){
	if (is_full(stack) == FALSE){
		(stack->top)++;
		stack->Arr[stack->top] = val;
	}
	else{
		printf("full!!\n");
	}
}