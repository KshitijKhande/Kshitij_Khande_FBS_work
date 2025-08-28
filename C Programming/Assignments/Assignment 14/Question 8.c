//8. Distance ( feet, inch)
#include<stdio.h>
struct Distance{
	int feet;
	int inch;
};
void main(){
	struct Distance d1,d2;
	printf("Enter the distance 1:");
	d1.feet=10;
	d1.inch=20;
	printf("\nThe total distance is %d feet %d inch",d1.feet,d1.inch);

	
	printf("\nEnter the distance 2 in feet:");
	scanf("%d",&d2.feet);
	printf("\nEnter the distance 2 in feet:");
	scanf("%d",&d2.inch);
	printf("\nThe total distance is %d feet %d inch",d2.feet,d2.inch);
}