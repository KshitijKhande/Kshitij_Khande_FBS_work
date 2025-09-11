//Set B -Question 2 - Reverse a string using recursive function //


#include <stdio.h>
void reverseNumber(int);
void main() {
    //int no=123;
    int no;
    printf("Enter the digit you want to reverse: ");
    scanf("%d",&no);
    printf("Reversed number: ");
    reverseNumber(no);
    printf("\n");
}
void reverseNumber(int no){
    if(no==0)
    	return no;
    printf("%d",no%10);
    reverseNumber(no/10);
}
