#include "stack.h"

int is_full(arr_stack *stack);
int is_empty(arr_stack *stack);
void stack_print(arr_stack *stack){
	int i;
	if (is_empty == TRUE)
		printf("full!!\n");
	else if (is_full == TRUE)
		printf("full!!\n");
	else{
		for (i = 0; i < stack->top + 1; i++)
			printf("top 번호= %d, 데이터= %d\n", i, stack->Arr[i]);
	}

}