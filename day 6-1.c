#include<stdio.h>
#include <string.h>
#include<stdlib.h>

int string_length(char s[]) {
   int i = 0;

   while(s[i]!='\0')
      i++;

   return i;    
}

int strcate(char first_string[20],char second_string[20])
{  
    int i;  // integer variable declaration  
    for(i=0;first_string[i]!='\0';i++);   
      
      
    for(int j=0;second_string[j]!='\0';j++)  
    {  
        
        first_string[i]=second_string[j];  
        i++;  
    }  
    first_string[i]='\0';  
    
    return 0;
}

void string_reverse(char st[]) {
   int i,j,len;
   char ch;

   j = len = string_length(st) - 1;
   i = 0;

   while(i < j) {
      ch = st[j];
      st[j] = st[i];
      st[i] = ch;
      i++;
      j--;
   }
}

int main (void) {
   char line[50];
   char reverse[100]="",temp[50];
   int i,j,n;
   
   printf("\nEnter the sentence: ");
   gets(line);

   n = string_length(line);

   for(i = 0; i < n; i++) {

      for(j = 0; i < n && line[i]!=' '; ++i,++j) {
         temp[j] = line[i];
      }
      
      temp[j] = '\0';

      string_reverse(temp);

      strcate(reverse, temp);
      strcate(reverse, " ");
   }
   
   printf("Entered sentence:  %s\n", line);
   printf("Reversed sentence: %s\n",reverse);
   
   return 0;
}

