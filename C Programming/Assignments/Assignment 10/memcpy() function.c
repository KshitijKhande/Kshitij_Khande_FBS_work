//memcpy() function

#include<stdio.h>
#include<string.h>
void main(){
	char src[] = "data";
	char dest[10];
	printf(memcpy(dest, src, strlen(src)+1)); 
}

