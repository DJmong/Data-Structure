#include "stack.h"

void stack_init(arr_stack *stack);
int is_empty(arr_stack *stack);
int is_full(arr_stack *stack);
int stack_pop(arr_stack *stack);
void stack_push(arr_stack *stack, int val);


void main(){
	arr_stack test;
	char key = 1;
	int val;
	stack_init(&test);
	
	while (key!='x'){
		printf("pop = p\npush = u\nprint = t\nexit = x\n");
		scanf("%s", &key);
		system("cls");
		switch (key){
			case 'p':
				val=stack_pop(&test);
				printf("%d pop", val);
				break;	
			case 'u':
				printf("inset val\n");
				scanf("%d", &val);
				stack_push(&test, val);
				break;
			case 't':
				stack_print(&test);
				printf("계속하려면 아무키나 누르시오");
				scanf("%s", &key);
				

				break;
		}
	}


}