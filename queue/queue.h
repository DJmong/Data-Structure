#define LEN 4
#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct queue_arr{
	Data arr[LEN];
	int front;
	int rear;
}q_arr;
