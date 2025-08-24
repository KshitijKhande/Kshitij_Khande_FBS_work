//1. Find minimum and maximum number in array.

#include<stdio.h>
#include<stdlib.h>
int *maximum(int*,int);
int *minimum(int*,int);
void main(){
	int arr[5];
    printf("Enter the elements of the array:");
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	int *max=maximum(arr,5);
	printf("\nThe maximum number is:");
	printf("%d",*max);
	printf("\nThe minimim number is:");
	int *min=minimum(arr,5);
	printf("%d",*min);
	
	

}
int *maximum(int* arr,int size){
	int *max=(int*)malloc(sizeof(int));
	*max=arr[0];
	for(int j=0;j<size;j++){
		if(arr[j]>*max)
			*max=arr[j];
	}
	return max;
	
}
int *minimum(int* arr,int size){
	int *min=(int*)malloc(sizeof(int));
	*min=arr[0];
	for(int k=0;k<size;k++){
		if(arr[k]<*min)
			*min=arr[k];
	}
	return min;
}