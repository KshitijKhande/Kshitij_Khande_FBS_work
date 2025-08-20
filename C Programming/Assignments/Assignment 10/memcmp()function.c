//memcmp() function

#include<stdio.h>
#include<string.h>
void main(){
	char str1[] = "shark";
	char str2[]="fish";
	int result = memcmp(str1, str2, 2);
	printf("%d",result);
}
