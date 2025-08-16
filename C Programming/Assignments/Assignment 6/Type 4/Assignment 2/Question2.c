//2. Accept three sides of a triangle from the user and determine whether the triangle is//
//equilateral, isosceles, or scalene.//

#include<stdio.h>
int triangle(float,float,float);
void main(){
	float s1,s2,s3;
	printf("Enter the three sides of a triangle: ");
	scanf("%f%f%f",&s1,&s2,&s3);
	int res=triangle(s1,s2,s3);
	if(res==1)
		printf("The triangle is an equilateral triangle");
	else if(res==2)
		printf("The triangle is an isosceles triangle");
	if(res==3)
		printf("The triangle is an scalene triangle");
}  //main ends here//
int triangle(float s1,float s2,float s3){
	if(s1==s2 && s2==s3)
		return 1;
	else if(s1==s2 || s1==s3 || s2==s3 && s1!=s2 && s2!=3)
		return 2;
	else if(s1!=s2 && s1!=s3 && s2!=s3)
		return 3;	
}     //function ends here//
