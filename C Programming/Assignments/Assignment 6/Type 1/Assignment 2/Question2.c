//2. Accept three sides of a triangle from the user and determine whether the triangle is//
//equilateral, isosceles, or scalene.//

#include<stdio.h>
void triangle();
void main(){
	triangle();
}  //main ends here//

void triangle(){
	float s1=3.5,s2=2.5,s3=3;
	if(s1==s2 && s2==s3){
		printf("The triangle is an equilateral triangle");
	}
	else{
		if(s1==s2 || s1==s3 || s2==s3 && s1!=s2 && s2!=3){
			printf("The triangle is an isosceles triangle");
		}else{
		if(s1!=s2 && s1!=s3 && s2!=s3){
			printf("The triangle is an scalene triangle");
		}	
		}
	}
}     //function ends here//
