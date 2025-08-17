//2. Accept three sides of a triangle from the user and determine whether the triangle is//
//equilateral, isosceles, or scalene.//

#include<stdio.h>
void triangle(float*,float*,float*);
void main(){
	float s1=3.50,s2=2.50,s3=3.00;
	float* p=&s1,*q=&s2,*s=&s3;
	triangle(p,q,s);
}  //main ends here//

void triangle(float *s1,float* s2,float* s3){
	
	if(*s1==*s2 && *s2==*s3){
		printf("The triangle is an equilateral triangle");
	}
	else{
		if(*s1==*s2 || *s1==*s3 || *s2==*s3 && *s1!=*s2 && *s2!=*s3){
			printf("The triangle is an isosceles triangle");
		}else{
		if(*s1!=*s2 && *s1!=*s3 && *s2!=*s3){
			printf("The triangle is an scalene triangle");
		}	
		}
	}
}     //function ends here//
