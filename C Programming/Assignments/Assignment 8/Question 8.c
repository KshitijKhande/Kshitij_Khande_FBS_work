//8. Merge two arrays

#include<stdio.h>
void main(){
	int arr[5],brr[5],crr[10];
	printf("Enter the elements of array 1:");
	for(int i=0;i<5;i++)
		scanf("%d",&arr[i]);
	printf("The elements of array 1 are:");
	for(int i=0;i<5;i++)
		printf("%d ",arr[i]);
		
	printf("\nEnter the elements of array 2:");
	for(int i=0;i<5;i++)
		scanf("%d",&brr[i]);
	printf("The elements of array 1 are :");
	for(int i=0;i<5;i++)
		printf("%d ",brr[i]);
	
	for(int i=0;i<10;i++)
		crr[i]=arr[i];
	for(int i=0;i<10;i++)
		crr[i+5]=brr[i];
		
	printf("\nThe mergeed array is: ");
	for(int i=0;i<10;i++)
		printf("%d ",crr[i]);
}