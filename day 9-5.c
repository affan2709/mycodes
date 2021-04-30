#include <stdio.h>
#include <stdlib.h>

void accept(int a[], int n)
{
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
}
void split(int a[], int n)
{
    int indexMax = 0;
    
    for(int i=1; i<n; i++)
    {
        if(a[i] > a[indexMax])
        {
            indexMax = i;
            
        }
    }
    
    
    printf("elements before largest  \n");
    for(int i=0; i < indexMax; i++)
        printf("%d\t", a[i]);
        
    printf("\n");
        
    printf("elements after largest   \n");
    for(int i=indexMax+1; i < n; i++)
        printf("%d\t", a[i]);
}
int main()
{
    int n;
    printf("Enter no of array elements\n");
    scanf("%d", &n);
    
    int a[50];
    printf("Enter the array elements\n");
    accept(a, n);
    
    printf("Splitting the array\n");
    split(a, n);
    
    return 0;
}
