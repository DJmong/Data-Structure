#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "LLS_struct_define.h"

typedef enum boolean{
	true,
	false
} boolean;
boolean is_empty(list *top){
	if (top == NULL)
		return true;
	else
		return false;
}
void list_push(list **top){
	int n;
	printf("Insert number : ");
	scanf("%d", &n);

	list *p = (list*)malloc(sizeof(list));
	p->number = n;
	p->pre = *top;
	*top = p;
}
int list_pop(list **top){
	list *now;
	int n;
	if (is_empty(*top) == true){
		printf("empty!\n");
		return -1;
	}
	now = *top;
	n = now->number;
	*top = now->pre;
	
	free(now);
	return n;
}
void list_print(list *top){
	
	if (is_empty(top) == false){
		printf("\n	忙式式式式忖");
		printf("\n	弛%4d弛\n", top->number);
		printf("	戌式式式式戎\n");
		list_print(top->pre);
	}
	
	
}

void list_main(list *top){
	int n=1;
	int pop;
	do{
		printf("push = 1, pop = 2, exit = 3\n");
		scanf("%d", &n);
		
		system("cls");

		switch (n){
			case 1:
				list_push(&top);
				break;
			case 2:
				pop=list_pop(&top);
				printf("%d is poped \n", pop);
				break;
		}
		list_print(top);
		

	} while (n != 3);
	
		
}