//memcpy() function

#include<stdio.h>
#include<string.h>
void main(){
	char str[] = "shark";
	printf(memmove(str+2, str, 4)); 
}
