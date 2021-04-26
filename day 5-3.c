#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *s;
	s=(char*)malloc(sizeof(char));
	printf("Enter string \n");
	scanf("%[^\n]s",s);
	int i;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]!=' ')
			{printf("%c",s[i]);}
		else
			{printf("\n");}
	}
	return(0);
}
