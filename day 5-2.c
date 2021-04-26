/*2.  Write a program to accept and display string (Memory must be allocated dynamically)
   using functions */
   
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void accept(char*a)
{
    printf("Enter the string\n");
    scanf("%s",a);
}
void display(char *a)
{
    printf("%s",a);
}
int main(){
    char *str;
    int n;
    printf("Enter the number of characters in string:");
    scanf("%d",&n);
    str=(char*)malloc(n*sizeof(int));
    accept(str);
    display(str);
}
