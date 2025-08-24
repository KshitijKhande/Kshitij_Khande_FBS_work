//4. Find odd and even among the numbers.

#include<stdio.h>
#include<stdlib.h>
int* even(int*,int,int*);
int* odd(int*,int,int*);
void main(){
	int arr[5];
    printf("Enter the elements of the array:");
	for(int i=0;i<5;i++)
		scanf("%d",&arr[i]);
	
	printf("\nThe array is: ");
	for(int i=0;i<5;i++)
		printf("%d ",arr[i]);
		
	int evencount=0,oddcount=0;

	printf("\nThe even numbers are:");
	int *res=even(arr,5,&evencount);
	for(int i=0;i<evencount;i++)
	printf("%d",res[i]);
	printf("\nThe odd numbers are:");
	int* res1=odd(arr,5,&oddcount);
	for(int i=0;i<oddcount;i++)
	printf("%d ",res1[i]);
	

}
int *even(int *arr,int size,int* evencount){
	int* evenn=(int*)malloc(sizeof(int)*size);
	int i=0;
	for(int j=0;j<size;j++){
		if(arr[j]%2==0)
			evenn[i++]=arr[j];
	}
	*evencount=i;
	return evenn;
}
int *odd(int *arr,int size,int *oddcount){
	int* oddn=(int*)malloc(sizeof(int)*size);
	int i=0;
	for(int j=0;j<size;j++){
		if(arr[j]%2!=0)
			oddn[i++]=arr[j];
	}
	*oddcount=i;
	return oddn;
}