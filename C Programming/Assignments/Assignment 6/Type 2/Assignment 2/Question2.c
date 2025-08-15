//2. Accept three sides of a triangle from the user and determine whether the triangle is//
//equilateral, isosceles, or scalene.//

#include<stdio.h>
int triangle();
void main(){
	int res=triangle();
	if(res==1)
		printf("The triangle is an equilateral triangle");
	else if(res==2)
		printf("The triangle is an isosceles triangle");
	else if(res==3)
		printf("The triangle is an scalene triangle");
}  //main ends here//

int triangle(){
	float s1=3.5,s2=2.5,s3=3;
	if(s1==s2 && s2==s3)
		return 1;
	else if(s1==s2 || s1==s3 || s2==s3 && s1!=s2 && s2!=3)
		return 2;
	else if(s1!=s2 && s1!=s3 && s2!=s3)
		return 3;
}//function ends here//
