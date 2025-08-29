//8. Distance ( feet, inch) using function
#include<stdio.h>
typedef struct Distance{
	int feet;
	int inch;
}Distance;
Distance formatDistance(Distance);
Distance storeDistance();
void displayDistance(Distance);
void main(){
	struct Distance d1,d2;
	printf("Enter the distance 1:");
	d1=storeDistance();
	d1=formatDistance(d1);
	printf("Enter the distance 2:");
	d2=storeDistance();
	d2=formatDistance(d2);
	
	printf("\nThe distance 1 is: ");
	displayDistance(d1);

	printf("\nThe distance 2 is: ");
	displayDistance(d2);
}
//formatting distance 12 inch =1 feet
Distance formatDistance(Distance d) {
    if(d.inch >= 12) {
        d.feet=d.feet+d.inch/12;
        d.inch=d.inch%12;
    }
    return d;
}

Distance storeDistance(){
	Distance temp;
	printf("Feet: ");
	scanf("%d",&temp.feet);
	printf("Inches: ");
	scanf("%d",&temp.inch);
	return temp;
}
void displayDistance(Distance d){
	printf("\n%d feet %d inch",d.feet,d.inch);
}