#include <stdio.h>
int sumsquare(int num)
{
    int sum=0;
    while(num!=0)
    {
        sum=sum+(num%10)*(num%10);
        num=num/10;
    }
    return sum;
}
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    int sum=sumsquare(num);
    while(sum!=1 && sum!=4)
    {
        sum=sumsquare(sum);
    }
    
    if(sum==1)
        printf(" Happy number \n");
    else
        printf(" Not a Happy number \n");

    return 0;
}
