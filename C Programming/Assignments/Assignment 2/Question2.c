#include<stdio.h>
void main(){
	float s1=3.5,s2=3.6,s3=3.3;
	if(s1==s2 && s2==s3){
		printf("The triangle is an equilateral triangle");
	}
	else{
		if(s1==s2 && s2!=s3){
			printf("The triangle is an isosceles triangle");
		}else{
		if(s1!=s2 && s2!=s3){
			printf("The triangle is an scalene triangle");
		}	
		}
	}
}