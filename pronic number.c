# include <stdio.h>
# include <stdlib.h>
int main()
{
    int num,i,n,flag;
	printf("\n\n Check whether a number is a Pronic Number or not: \n");
	printf(" Input a number: ");
	scanf("%d",&num);
    for(i=1;i<=num;i++)
        {
            if(i*(i+1)==num) 
            {
            flag=1;
            break;
            }
        }
  
            if(flag==1)
            {
			printf(" The given number is a Pronic Number.\n");
            }
            else
            {
			printf(" The given number is not a Pronic Number.\n");
            }
}
