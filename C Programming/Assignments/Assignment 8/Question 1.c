//1. Find minimum and maximum number in array.

#include<stdio.h>
void main(){
	int arr[5];
    printf("Enter the elements of the array:");
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	
	// To find maximum number in array//
	printf("\nThe maximum number is:");
	int max=arr[0];
	for(int j=0;j<5;j++){
		if(arr[j]>arr[0])
			max=arr[j];
	}
	printf("%d",max);
	
	// To find minimum number in array//
	printf("\nThe minimim number is:");
	int min=arr[0];
	for(int k=0;k<5;k++){
		if(arr[k]<arr[0])
			min=arr[k];
	}
	printf("%d",min);
}