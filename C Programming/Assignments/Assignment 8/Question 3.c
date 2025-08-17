//3. Find sum of all numbers.
#include<stdio.h>
void main(){
	int arr[5];
    printf("Enter the elements of the array:");
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("The array is: ");
	for(int i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	printf("\nThe sum of the elements of array is:");
	int sum=0;
	for(int j=0;j<5;j++){
		sum=sum+arr[j];
	}
	printf(" %d",sum);
}