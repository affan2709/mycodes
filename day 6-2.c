#include <stdio.h>
#include<stdlib.h>
typedef struct str{
    char array1[20];
    char array2[20];
}st;
typedef struct node {
    st data;
}nd;
int find_anagram(char [], char []);
 
int main()
{
    int flag;
    nd *t;
    t = (nd *) malloc(sizeof(nd));
    printf("Enter the string\n");
    scanf("%s",(t->data).array1);
    printf("Enter another string\n");
    scanf("%s",(t->data).array2);
    flag = find_anagram((t->data).array1,(t->data).array2);
    if (flag == 1)
        printf("%s and %s are anagrams.\n", (t->data).array1, (t->data).array2);
    else
        printf("%s and %s are not anagrams.\n", (t->data).array1, (t->data).array2);
    return 0;
}
 
int find_anagram(char array1[], char array2[])
{
    int num1[26] = {0}, num2[26] = {0}, i = 0;
 
    while (array1[i] != '\0')
    {
        num1[array1[i] - 'a']++;
        i++;
    }
    i = 0;
    while (array2[i] != '\0')
    {
        num2[array2[i] -'a']++;
        i++;
    }
    for (i = 0; i < 26; i++)
    {
        if (num1[i] != num2[i])
            return 0;
    }
    return 1;
}
