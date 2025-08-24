//Merge two arrays in a third array//

#include<stdio.h>
#include<stdlib.h>
int *mergedArray(int*,int*,int);
void main(){
	int arr[5],brr[5];
	printf("Enter the elements of array 1:");
	for(int i=0;i<5;i++)
		scanf("%d",&arr[i]);
	printf("The elements of array 1 are:");
	for(int i=0;i<5;i++)
		printf("%d ",arr[i]);
		
	printf("\nEnter the elements of array 2:");
	for(int i=0;i<5;i++)
		scanf("%d",&brr[i]);
	printf("The elements of array 2 are :");
	for(int i=0;i<5;i++)
		printf("%d ",brr[i]);
	int *p=mergedArray(arr,brr,10);
	for(int i = 0; i < 10; i++)
    printf("%d ", p[i]);
	
}
int* mergedArray(int *arr,int *brr,int size){
	int* crr=(int*)malloc(sizeof(int)*size);
	for(int i=0;i<5;i++)
		crr[i]=arr[i];
	for(int i=0;i<5;i++)
		crr[i+5]=brr[i];
		
	printf("\nThe mergeed array is: ");
	for(int i=0;i<size;i++)
		//printf("%d ",crr[i]);
	return crr;
}