//4. Ask the user to enter marks. Then show the result based on these rules:
//If marks are more than 75 ? show "Distinction"
//If marks are more than 65 ? show "First Class"
//If marks are more than 55 ? show "Second Class"
//If marks are 40 or more ? show "Pass Class"
//If marks are less than 40 ? show "Fail"

#include<stdio.h>
void result(int);
void main(){
	int marks;
	printf("Enter your total marks:");
	scanf("%d",&marks);
	result(marks);
}       //main ends here//

void result(int marks){
	
	if(marks>=75)
		printf("Result: Distinction");
	else if(marks>=65 && marks<75)
		printf("Result: First Class");
	else if(marks>=55 && marks<65)
		printf("Result: Second Class");
	else if(marks>=45 && marks<55)
		printf("Result: Pass Class");
	else if(marks<40)
		printf("Result : Fail");
}       //function ends here//