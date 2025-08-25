


#include<stdio.h>
void common(int*,int*);
void main(){
	int arr[5],brr[5];
	printf("Enter elements of array 1: ");
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nThe elements of array 1 are: ");
	for(int i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	
	printf("\nEnter elements of array 2: ");
	for(int i=0;i<5;i++){
		scanf("%d",&brr[i]);
	}
	printf("\nThe elements of array 2 are: ");
	for(int i=0;i<5;i++){
		printf("%d ",brr[i]);
	}
	common(arr,brr);
	
}
void common(int *arr,int *brr){
	printf("\nThe common elements in both the array are: ");
	for(int i=0;i<5;i++){
		for (int j=0;j<5;j++){
		if(arr[i]==brr[j])
			printf("%d ",arr[i]);
	}
}
}
