/*4. Write a C program to  search a specified eleent in array of random elements.
if the search  is successful then,  the program should  display the following
1. Search is successful 
2. the position of first occurance
3. the position of the last occurance */
#include <stdio.h>
void findFirstAndLast(int arr[], int n, int x)
{
    int first = -1, last = -1;
    for (int i = 0; i < n; i++) {
        if (x != arr[i])
            continue;
        if (first == -1)
            first = i+1;
        last = i+1;
    }
    if (first != -1)
        
           {   printf("Search successful\n");
               printf("First Occurrence = %d\n",first);
               printf("last Occurrence = %d\n",last);}
    else
       printf("Search  Unsuccessful\n");
}
int main()
{
    int n;int a[50];
    printf("enter no of element\n");
    scanf("%d",&n);
    
    printf("enter the elements\n");
    for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
      int search;
      printf("enter the element to search\n");
        scanf("%d",&search);
        findFirstAndLast(a,n,search);
        
    return 0;
}

