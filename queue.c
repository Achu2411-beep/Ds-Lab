#include <stdio.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1;
int isFull(){
	return(rear==MAX-1);
}
int isEmpty(){
	return(front==-1||front>rear);
}
void enqueue(int data){
	if(isFull()){
	printf("Queue is full!\n");
}else{
	if(front==-1)front=0;
	queue[++rear]=data;
	printf("%d enqueued\n",data);
}
}
void dequeue(){
	if(isEmpty()){
		printf("Queue is empty!\n");
	}else{
		printf("%d dequeued\n",queue[front++]);
	}
}
void display(){
	if(isEmpty()){
		printf("Queue is Empty!\n");
	}else{
		printf("Queue:");
		for(int i=front;i<=rear;i++){
			printf("%d",queue[i]);
		}
		printf("\n");
	}
}
int main(){
	int choice,value;
	while(1){
		printf("\n------Queue Menu-----\n");
		printf("1.Enqueue\n");
		printf("2.Dequeue\n");
		printf("3.Display\n");
		printf("4.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter value to enqueue:");
				scanf("%d",&value);
				enqueue(value);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("Exiting---\n");
				return 0;
			default:
				printf("Invalid choice!Try again.\n");
		}
	}
}
