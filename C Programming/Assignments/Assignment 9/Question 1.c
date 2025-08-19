//1. Find minimum and maximum number in array.

#include<stdio.h>
int maximum(int[],int);
int minimum(int[],int);
void main(){
	int arr[5],max,min;
    printf("Enter the elements of the array:");
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	max=maximum(arr,5);
	printf("\nThe maximum number is:");
	printf("%d",max);
	printf("\nThe minimim number is:");
	min=minimum(arr,5);
	printf("%d",min);
	
	

}
int maximum(int arr[],int size){
	int max=arr;
	for(int j=0;j<size;j++){
		if(arr[j]>arr[0])
			max=arr[j];
	}
	return max;
	
}
int minimum(int arr[],int size){
	int min=arr[0];
	for(int k=0;k<size;k++){
		if(arr[k]<arr[0])
			min=arr[k];
	}
	return min;
}