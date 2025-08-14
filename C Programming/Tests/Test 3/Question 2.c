//2. WAP to add alternate numbers from given range.
//eg. i/p: start= 1, end= 5 o/p: sum= 9

#include<stdio.h>
void main(){
	int start,end;
	printf("Enter the start and end range:");
    scanf("%d%d",&start,&end);
    printf("The alternate numbers in the range are: ");
    for(start;start<=end;start=start+2){
    	//if(start%2!=0)
			printf("%d ",start);
}
}