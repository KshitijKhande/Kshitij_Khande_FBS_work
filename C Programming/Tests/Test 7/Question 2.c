//2.Check if the array is palindrome or not.(using function).

#include<stdio.h>
int palindromeArray(int*,int);
void main(){
	int arr[5];
	printf("Enter the elements of the array: ");
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nThe elements of the array are:");
	for(int i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	int res=palindromeArray(arr,5);
	if(res)
		printf("\nThe array is a palindrome array.");
	else
		printf("\nThe array is not a palindrome array.");	
}
int palindromeArray(int *arr,int size){
	int i=0,j=size-1;
	
//	for(i;i<size/2;i++){
//		if(arr[i]!=arr[size-1-i])
//			return 0;
//	}
	while(i<j){
		if(arr[i]!=arr[j])
		 return 0;
		 i++;
		 j--;
	}
	return 1;
}