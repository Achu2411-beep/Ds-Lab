#include<stdio.h>
int main(){
	int n,i,key;
		int arr[100];
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter elements to search:");
	scanf("%d",&key);
	int found=0;
	for(i=0;i<n;i++){
		if(arr[i]==key){
			printf("Element%d found at position%d\n",key,i+1);
			found=1;
			break;
		}
	}
	if(!found){
		printf("Element %d not found in array\n",key);
	}
	return 0;
}
