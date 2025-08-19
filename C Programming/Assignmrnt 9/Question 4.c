//4. Find odd and even among the numbers.

#include<stdio.h>
void even(int[],int);
void odd(int[],int);
void main(){
	int arr[5];
    printf("Enter the elements of the array:");
	for(int i=0;i<5;i++)
		scanf("%d",&arr[i]);
	
	printf("\nThe array is: ");
	for(int i=0;i<5;i++)
		printf("%d ",arr[i]);

	printf("\nThe even numbers are:");
	even(arr,5);
	printf("\nThe odd numbers are:");
	odd(arr,5);

}
void even(int arr[],int size){
	for(int j=0;j<5;j++){
		if(arr[j]%2==0)
			printf("\n%d",arr[j]);
	}
}
void odd(int arr[],int size){
	for(int j=0;j<5;j++){
		if(arr[j]%2!=0)
			printf("\n%d",arr[j]);
	}
}