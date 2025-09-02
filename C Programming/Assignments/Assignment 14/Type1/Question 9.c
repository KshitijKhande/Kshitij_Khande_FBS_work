//9. Complex (real, imaginary) using function

#include<stdio.h>
struct complex{
	float real;
	float imaginary;
};
void main(){
	struct complex comp1,comp2;
	printf("The details of complex number 1 is:");
	comp1.real=3;
	comp1.imaginary=4;
	printf("\nReal: %f",comp1.real);
	printf("\nImaginary: %f",comp1.imaginary);
	printf("\nThe complex number is : %f + %fi",comp1.real,comp1.imaginary);
	
	printf("\nEnter the details of number 2:");
	printf("\nReal: ");
	scanf("%f",&comp2.real);
	printf("\nImaginary: ");
	scanf("%f",&comp2.imaginary);
	printf("\nThe complex number is : %f + %fi",comp2.real,comp2.imaginary);
}