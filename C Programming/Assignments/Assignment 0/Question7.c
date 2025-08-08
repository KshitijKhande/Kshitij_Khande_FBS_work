#include <stdio.h>

void main() {
    int minutes=135;
	int hour= minutes/60;
    int r_minutes=minutes%60;
    printf("%d minutes is equal to %d hours and %d minutes.\n", minutes, hour, r_minutes);

}
