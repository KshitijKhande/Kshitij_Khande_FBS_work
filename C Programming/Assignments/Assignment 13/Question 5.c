//5. Print alternate elements in array.

#include<stdio.h>
#include<stdlib.h>
int* alternate(int*,int,int*);
void main(){
	int arr[5];
    printf("Enter the elements of the array:");
	for(int i=0;i<5;i++)
		scanf("%d",&arr[i]);
	printf("\nThe alternate elements in the array is: ");
	int asize;
	int* res=alternate(arr,5,&asize);
	for(int i=0;i<asize;i++)
		printf("%d ",res[i]);
}
int* alternate(int *arr,int size,int *asize){
	*asize=(size+1)/2;
	int j=0;
	int *alt=(int*)malloc(sizeof(int) * (*asize));
	for(int i=0;i<size;i=i+2)
		alt[j++]=arr[i];
		
	return alt;
}