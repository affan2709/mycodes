#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *str;
	str=(char*)malloc(sizeof(char));
	printf("Enter a string\n");
	scanf("%s",str);
	printf("Entered string is %s\n",str);
	return(0);
}
