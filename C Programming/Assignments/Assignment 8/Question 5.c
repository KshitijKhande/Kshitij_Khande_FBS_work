//5. Print alternate elements in array.

#include<stdio.h>
void alternate(int[],int);
void main(){
	int arr[5];
    printf("Enter the elements of the array:");
	for(int i=0;i<5;i++)
		scanf("%d",&arr[i]);
	printf("\nThe alternate elements in the array is: ");
	alternate(arr,5);
}
void alternate(int arr[],int size){
	for(int i=0;i<5;i=i+2)
		//if(arr[i]%2!=0)
		printf("%d ",arr[i]);
}