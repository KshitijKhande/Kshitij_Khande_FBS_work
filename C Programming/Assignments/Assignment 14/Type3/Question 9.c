//9. Complex (real, imaginary)
#include<stdio.h>
typedef struct Complex {
	float real;
	float imaginary;
} Complex;
void StoreComplex(Complex*,int);
void DisplayComplex(Complex*,int );
void main() {
	Complex comp[3];
	StoreComplex(comp,3);
	DisplayComplex(comp,3);

}
void StoreComplex(Complex*comp,int size) {
	for(int i=0;i<size;i++){
		printf("\nEnter details for Complex %d:\n",i+1);
		printf("Real :");
		scanf("%f",&comp[i].real);
		printf("Imaginary :");
		scanf("%f",&comp[i].imaginary);
	}
	

}
void DisplayComplex(Complex *comp,int size) {
	for(int i=0;i<size;i++){
		printf("\nReal=%f",comp[i].real);
		printf("\nImaginary=%f",comp[i].imaginary);
		printf("\nComplex 2: %f + %fi", comp[i].real, comp[i].imaginary);
	}
	

}