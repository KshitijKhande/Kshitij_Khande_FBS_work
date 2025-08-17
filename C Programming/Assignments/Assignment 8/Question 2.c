//2. Search the given number in array.

#include<stdio.h>
void main(){

	int arr[5];
	int sno;
    printf("Enter the elements of the array:");
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nThe array is: ");
	for(int i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	printf("\nEnter the number you want to search:");
	scanf("%d",&sno);
	for(int j=0;j<5;j++){
		if(sno==arr[j]){
			printf("%d is present in the array at index %d",arr[j],j);
		}
	}
}