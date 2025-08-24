//9. Reverse the given array.

#include<stdio.h>
#include<stdlib.h>
int* reverse(int*,int);
void main(){
	int arr[5];
	printf("Enter the elements of the array: ");
	for(int i=0;i<5;i++)
		scanf("%d",&arr[i]);
	printf("The array in reverse is :");
	int *res=reverse(arr,5);
	for(int i=0;i<5;i++)
		printf("%d ",res[i]);
	
}
int* reverse(int *arr,int size){
	int *r=(int*)malloc(sizeof(int)*size);
	for(int i=size-1;i>=0;i--)
		r[i]=arr[size-i-1];
		//printf("%d ",arr[i]);
	return r;	
}