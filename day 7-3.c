#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char ch[100];
	printf("Enter a sentence\n");
	scanf("%[^\n]s",ch);
	int i,ctr=0;
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]==' ' && ch[i+1]!=' ')
			{ctr++;}
	}
	printf("No of words in string are %d\n",ctr+1);
	return(0);
}
