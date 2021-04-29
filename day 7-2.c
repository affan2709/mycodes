#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char ch[50],c;
	printf("Enter string\n");
	scanf("%s",ch);
	int i,key,j,count,max=-32768;
	for(i=0;ch[i]!='\0';i++)   //traverse the string
	{
        key=ch[i];//to store ascii value
        count=0;
        for(j=0;j<strlen(ch);j++)  //to again traverse the string and compare each character with string
        {
        	if(key==ch[j])
        		count++;
        }
        if(count>max)
        {
        	c=ch[i];
        	max=count;
        }
	}
	printf("Maximum occuring character is %c\n",c);
	return(0);
}
