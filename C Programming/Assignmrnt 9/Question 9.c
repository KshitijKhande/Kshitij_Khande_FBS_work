//9. Reverse the given array.

#include<stdio.h>
void reverse(int[],int);
void main(){
	int arr[5];
	printf("Enter the elements of the array: ");
	for(int i=0;i<5;i++)
		scanf("%d",&arr[i]);
	printf("The array in reverse is :");
	reverse(arr,5);
	
}
void reverse(int arr[],int size){
	int r;
	for(int i=size-1;i>=0;i--)
		printf("%d ",arr[i]);
}