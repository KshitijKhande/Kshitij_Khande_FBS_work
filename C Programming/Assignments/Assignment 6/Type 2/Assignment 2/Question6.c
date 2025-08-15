//6. Accept a number and check if it is divisible by 3, 5, or both.
//(Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
//both" or” Divisible by None”)

#include<stdio.h>
int divisibility();
void main(){
	int res=divisibility();
	if(res%3==0 && res%5==0)
		printf("%d is divisible by both 3 and 5",res);
	else if(res%3==0 && res%5!=0)
		printf("%d is divisible by 3 but not by 5",res);
	else if(res%3!=0 && res%5==0)
		printf("%d is not divisible by 3 but is divisible by 5",res);
	else if(res%3!=0 && res%5!=0)
		printf("%d is not divisible by both 3 and 5",res);
	
}    //main ends here//
int divisibility(){
	int no;
	printf("Enter a number:");
	scanf("%d",&no);
	return no;
	
	
}    //function ends here//