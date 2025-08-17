//5. Write a menu driven program to take a number for user and perform operations as follows.
//
//Press 1.To check number is even or odd.
//2.To check number is prime or not.
//3.To check number is pallindrome or not.
//4.To check number is positive, negative or zero.
//5.To reverse a number.
//6.To find sum of digits.

#include<stdio.h>
void menu();
void main(){
	menu();
}
void menu(){
	int num,option;
	printf("Enter the number:");
	scanf("%d",&num);
	printf("The options are: \n1.To check number is even or odd.\n2To check number is prime or not.\n3.To check number is pallindrome or not.\n4.To check number is positive, negative or zero.\n5.To reverse a number.\n6.To find sum of digits.\n");
	printf("Enter the option number:");
	scanf("%d",&option);
	
	if(option==1){
		if(num%2==0)
			printf("%d is an even number",num);
		else
			printf("%d is an odd number",num);
	}
	
	
	else if(option==2){
		int flag=1;
		if (num <= 1)
			flag = 0;
    else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0)
                flag = 0;
        }
    }
	if (flag)
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is Not a Prime number.\n", num);
	}
	
	
	//option3//
	else if(option==3){
		int temp=num,rem=0;
		while(num>0){
			int r1=num%10;
			rem=rem*10+r1;
			num=num/10;
		}
		if(temp==rem)
			printf("%d is a Palindrome number",temp);
		else
			printf("%d is not a Palindrome number",temp);
	}
}