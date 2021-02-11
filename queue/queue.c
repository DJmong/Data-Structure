#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "queue.h"
#include <Windows.h>

void queue_init(q_arr *q);
void queue_push(q_arr *q, int val);
int queue_pop(q_arr *q);
void main(){
	q_arr *q = (q_arr*)malloc(sizeof(q_arr));
	int a;
	int i;

	queue_init(q);
	while (1){
		printf("\n push = 1\n pop = 0\n");
		scanf("%d", &a);
		system("cls");
		switch (a){
			//pop	
			case 0:
				printf("%d\n", queue_pop(q));
				break;
			case 1:
				printf("number = ");
				scanf("%d", &a);
				queue_push(q, a);
		
				for (i = 0; i < q->rear+1; i++){
					printf("%d\n", q->arr[i]);
				}
		}
	}
	free(q);

}