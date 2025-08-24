//7. Take two array and add sum in third array
//Example-
//arr[5]= {1,2, 3, 4,5}
//brr[5]={10,20,30, 40, 50}
//crr[5]={11,22,33,44,55}
#include<stdio.h>
#include<stdlib.h>
int* sumofArray(int*,int*,int);
void main(){
	int arr1[5],arr2[5];
	printf("Enter the value of array 1: ");
	for(int i=0;i<5;i++)
		scanf("%d",&arr1[i]);
	printf("\nArray 1: ");
	for(int i=0;i<5;i++)
		printf("%d ",arr1[i]);
	printf("\nEnter the value of array 2: ");
	for(int i=0;i<5;i++)
		scanf("%d",&arr2[i]);
	printf("\nArray 2: ");
	for(int i=0;i<5;i++)
		printf("%d ",arr2[i]);
	
	printf("\nThe array 3 will be:\n");
	int* res=sumofArray(arr1,arr2,5);
	for(int i=0;i<5;i++)
		printf("%d ",res[i]);
}
int* sumofArray(int *arr1,int *arr2,int size){
	int *arr3=(int*)malloc(sizeof(int)*4);
	for(int i=0;i<5;i++){
		arr3[i]=arr1[i]+arr2[i];
		
	}
	return arr3;
}