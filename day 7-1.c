#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch;
	printf("Enter a character\n");
	scanf("%c",&ch);
	printf("The ASCII value of %c is %d\n",ch,(int)ch);
	return(0);
}
