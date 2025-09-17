#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push(){
  int value;
	if(top==MAX-1){
		printf("Stack Overflow!Cannot push\n");
	}else{
		printf("Enter value to push:");
		scanf("%d",&value);
	        top++;
		stack[top]=value;	
		printf("%d pushed to stack.\n",value);
	}
}
void pop(){
	if(top==-1){
		printf("Stack underflow!Cannot pop.\n");
	}else{
		printf("%d popped from stack.\n",stack[top]);
		top--;
	}
}
void display(){
	if(top==-1){
		printf("Stack is empty!\n");
	}else{
		printf("Stack elements:");
		for(int i=top;i>=0;i--){
			printf("%d ",stack[i]);
		}
		printf("\n");
	}
}
int main(){
	int choice;
	while(1){
	printf("\n---Stack Menu---\n");
	printf("1.Push\n");
	printf("2.Pop\n");
	printf("3.Display\n");
	printf("4.Exit\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	switch(choice){
           case 1:
		push();
		break;
           case 2:
		pop();
		break;
           case 3:
		display();
		break;
           case 4:
		printf("Exiting program.\n");
		return 0;
		default:
		printf("Invalid choice!Try again.\n");
	
	}
}
}

