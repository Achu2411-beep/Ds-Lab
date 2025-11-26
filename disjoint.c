#include<stdio.h>
#define SIZE 100
int parent[SIZE];

void makeSet(int n){
        for(int i=0;i<n;i++){
                parent[i]=i;
        }
}
int find(int x){
        if(parent[x]==x)
                return x;
        else
                return find(parent[x]);
}
void unionSets(int x,int y){
        int parentX=find(x);
        int parentY=find(y);
if(parentX !=parentY){
        parent[parentY] = parentX;
        printf("Union done between %d and %d \n",x,y);
}else{
        printf("%d and %d are alredy in the same set. \n",x,y);
}
}
int main(){
        int n,choice,x,y;
        printf("Enter no of elements :");
        scanf("%d",&n);

        makeSet(n);
do
{
        printf("\n---Disjoint set menu---\n");
        printf("1.Union \n");
        printf("2.Find \n");
        printf("3.Display parent array \n");
        printf("4.Exit \n");
        printf("Enter your choice :");
        scanf("%d",&choice);

        switch(choice){
                case 1:
                        printf("Enter two elements to union:");
                        scanf("%d %d",&x,&y);
                        if(x<n && y<n)
                                unionSets(x,y);
                        else
                                printf("Invalid elements :\n");
                        break;
                case 2:
                        printf("Enter element to find its parent: ");
                        scanf("%d",&x);
                        if(x<n)
                                printf("parent of %d is %d \n",x,find(x));
                        else
                                printf("Invalid element! \n");
                        break;
                case 3:
                        printf("Parent array: \n");
                        for(int i=0;i<n;i++)
                                printf("Element %d ->parent %d \n",i,parent[i]);
                        break;
                case 4:
                        printf("Exiting...\n");
                        break;
                default:
                        printf("Invalid choice \n");
        }
}while (choice !=4);
return 0;
}
                   
