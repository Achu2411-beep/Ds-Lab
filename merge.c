#include<stdio.h>
int main(){
int arr1[50],arr2[50],merged[100];
int size1,size2,sizemerged;
int i,j;
printf("Enter size of first array:");
scanf("%d",&size1);
printf("Enter elements of first array:\n");
for(i=0;i<size1;i++){
	scanf("%d",&arr1[i]);
}
printf("Enter size of second array:");
scanf("%d",&size2);
printf("Enter elements of second array:\n");
for(i=0;i<size2;i++){
	scanf("%d",&arr2[i]);
}
for(i=0;i<size1;i++){
	merged[i]=arr1[i];
}
	for (j=0;j<size2;j++){
		merged[i+j]=arr2[j];
	}
	sizemerged=size1+size2;
	printf("Merged Array:");
	for(i=0;i<sizemerged;i++){
		printf("%d ",merged[i]);
	}
	return 0;
}

