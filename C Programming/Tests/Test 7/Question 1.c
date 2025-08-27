//1. Write a program to accept a array and exchangr position of Xth element with Yth element (using function).

#include<stdio.h>
int *exchangePosition(int*,int,int);
void main(){
	int arr[10],x,y;
	printf("Enter the elements of the array: ");
	for(int i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nThe elements of the array are:");
	for(int i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	
	printf("\nEnter the Xth position: ");
	scanf("%d",&x);
	printf("\nEnter the Xth position: ");
	scanf("%d",&y);
	
	int *res=exchangePosition(arr,x,y);
	for(int i=0;i<10;i++)
	printf("%d ",res[i]);
}
int *exchangePosition(int *arr,int x,int y){
		int temp=arr[x];
		arr[x]=arr[y];
		arr[y]=temp;
	return arr;
}