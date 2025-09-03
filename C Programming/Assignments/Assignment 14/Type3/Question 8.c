//8. Distance ( feet, inch) using function
#include<stdio.h>
typedef struct Distance{
	int feet;
	int inch;
}Distance;
void formatDistance(Distance*,int);
void storeDistance(Distance*,int);
void displayDistance(Distance*,int);
void main(){
	Distance d[3];
	storeDistance(d,3);
	formatDistance(d,3);
	displayDistance(d,3);

}
//formatting distance 12 inch =1 feet
void formatDistance(Distance *d,int size) {
	for(int i=0;i<size;i++){
		if(d[i].inch >= 12) {
        d[i].feet=d[i].feet+d[i].inch/12;
        d[i].inch=d[i].inch%12;
    }
	}
    
}

void storeDistance(Distance *d,int size){
	for(int i=0;i<size;i++){
		printf("Enter the distance %d:",i+1);
		printf("\nFeet: ");
		scanf("%d",&d[i].feet);
		printf("\nInches: ");
		scanf("%d",&d[i].inch);
	}
}
void displayDistance(Distance *d,int size){
	for(int i=0;i<size;i++){
		printf("\nThe distance %d is: ",i+1);
		printf("\n%d feet %d inch",d[i].feet,d[i].inch);	
	}

}