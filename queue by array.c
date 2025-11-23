#include<stdio.h>
#define SIZE 100

typedef struct queue{
	int arr[SIZE];
	int front;
	int rear;
}queue;

void init(queue* q){
	q->front=-1;
	q->rear=-1;
}

void enqueue(queue* q,int data){ // push function
	if(q->rear==SIZE-1){
		printf("Queue is full\n");
		return;
	}
	q->arr[++q->rear]=data;
}

void dequeue(queue* q){   // pop function
	if(q->front==q->rear){
		printf("Queue is empty\n");
		return;
	}
	q->front++;
}

int get_front(queue* q){
	if(q->front!=q->rear){     //if queue is full
		return q->arr[(q->front)+1];
	}
	return 0;
}

int get_rear(queue* q){
	if(q->front==q->rear){
		return 0;
	}
	return q->arr[q->rear];
}

int main(){
	queue q;
	init(&q);
	enqueue(&q,30);
	enqueue(&q,40);
	enqueue(&q,50);
	enqueue(&q,60);
	printf("%d\n",get_front(&q));
	dequeue(&q);
	printf("%d\n",get_front(&q));
	
	printf("%d\n",get_rear(&q));
	dequeue(&q);
	printf("%d\n",get_rear(&q));
	
	
}

























