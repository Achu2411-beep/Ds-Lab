#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int queue[SIZE];
int front=-1,rear=-1;
void enqueue(int value){
	if((rear+1)%SIZE==front){
		printf("Queue is Full!\n");
	}else{
		if(front==-1)
			front=0;
		rear=(rear+1)%SIZE;
		queue[rear]=value;
		printf("%d inserted into queue.\n",value);
	}
}
void dequeue(){
	if(front==-1){
		printf("Queue is Empty!\n");
	}else{
		int deleted=queue[front];
		if(front==rear){
			front=rear=-1;
		}else{
			front=(front+1)%SIZE;
		}
		printf("%d deleted from queue.\n",deleted);
	}
}
void display(){
	if(front==-1){
		printf("Queue is Empty!\n");
	}else{
		printf("Queue elements:");
		int i=front;
		while(1){
			printf("%d ",queue[i]);
			if(i==rear)
				break;
			i=(i+1)%SIZE;
		}
		printf("\n");
	}
}
int main(){
	int choice,value;
	while(1){

		printf("\n-----Circular Queue Menu-----\n");
	        printf("1.Enqueue\n 2.Dequeue\n 3.Display\n 4.Exit\n");
	        printf("Enter your choice:");
	        scanf("%d",&choice);
	        switch(choice){
			
		case 1:
			printf("Enter value to inserted :");
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
			exit(0);
			
		default:
			printf("Invalid choice! Try again:\n");
	}
	}
	return 0;

}

