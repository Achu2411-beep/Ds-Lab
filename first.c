#include<stdio.h>
int main(){
	int arr[]={5,10,15,20};
	int n=sizeof(arr);
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	printf("sum of array=%d\n",sum);
	return 0;
}
