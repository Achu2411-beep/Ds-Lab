#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node*left,*right;
};
struct Node*createNode(int value){
	struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=value;
	newNode->left=newNode->right=NULL;
	return newNode;
}
struct Node*insert(struct Node*root,int value){
	if(root==NULL)
		return createNode(value);
	if(value<root->data)
		root->left=insert(root->left,value);
	else if(value>root->data)
		root->right=insert(root->right,value);
	return root;
}
struct Node*search(struct Node*root,int key){
	if(root==NULL||root->data==key)
		return root;
	if(key<root->data)
		return search(root->left,key);
	return search(root->right,key);
}
void inorder (struct Node*root){
	if(root!=NULL){
		inorder(root->left);
		printf(" %d ",root->data);
		inorder(root->right);
	}
}
void preorder (struct Node*root){
        if(root!=NULL){
                printf(" %d ",root->data);
		preorder(root->left);
                preorder(root->right);
	}
}
void postorder (struct Node*root){
        if(root!=NULL){
                postorder(root->left);
		postorder(root->right);
                printf(" %d ",root->data);
              
	}
}
struct Node*findMin(struct Node*node){
	struct Node*current=node;
	while(current &&current->left!=NULL)
		current=current->left;
	return current;
}
struct Node*deleteNode(struct Node*root,int key){
	if(root==NULL)
		return root;
	if(key<root->data)
		root->left=deleteNode(root->left,key);
	else if(key> root->data)
		root->right=deleteNode(root->right,key);
	else{
		if(root->left==NULL){
			struct Node*temp=root->right;
			free(root);
			return temp;
		}else if(root->right==NULL){
			struct Node*temp=root->left;
			free(root);
			return temp;
		}
		struct Node*temp=findMin(root->right);
		root->data=temp->data;
		root->right=deleteNode(root->right,temp->data);
	}
	return root;
}
int main(){
	struct Node *root=NULL;
	int choice,value;
	while(1){
		printf("\n\n-----Binary Search Tree----\n");
		printf("1.Insert\n 2.Search\n 3.Inorder\n 4.Preorder\n 5.Postorder\n 6.Delete\n 7.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch( choice){
			case 1:
				printf("Enter value to insert:");
				scanf("%d",&value);
				root=insert(root,value);
				break;
			case 2:
				printf("Enetr value to search:");
                                scanf("%d",&value);
                                if(search(root,value))
					printf("%d found in the tree.\n",value);
				else
					printf("%d not found.\n",value);
                                break;
                        case 3:
				printf("Inorder traversal:");
				inorder(root);
				break;
			case 4:
				printf("Preorder traversal:");
                                preorder(root);
                                break;
			case 5:
				printf("postorder traversal:");
                                postorder(root);
                                break;
			case 6:
				printf("Enter value to delete:");
				scanf("%d",&value);
				root=deleteNode(root,value);
				break;
			case 7:
				exit(0);
			default:
				printf("Invalid choice!\n");
		}
	}
	return 0;
}



