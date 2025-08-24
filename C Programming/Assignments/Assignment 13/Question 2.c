//2. Search the given number in array.

#include<stdio.h>
#include<stdlib.h>
int search(int*,int,int);
void main(){

	int* arr=(int*)malloc(sizeof(int));
	int sno,searching;
    printf("Enter the elements of the array:");
	for(int i=0;i<5;i++)
		scanf("%d",&arr[i]);
	printf("\nThe array is: ");
	for(int i=0;i<5;i++)
		printf("%d ",arr[i]);
	printf("\nEnter the number you want to search:");
	scanf("%d",&sno);
	searching=search(arr,5,sno);
	if(searching==-1){
		printf("%d is not found in the array",sno);
	}else
		printf("%d found at index %d",sno,searching);
	free(arr);
	
}
int search(int* arr,int size,int sno){
	for(int j=0;j<size;j++)
		if(sno==arr[j])
			return j;
	 
	return -1;

}