#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node
{
    char name[20];
    struct node *link;
}nd;
nd *insert(nd *f)
{
    nd *temp;
    nd *t=(nd *)malloc(sizeof(nd));
    t->link=0;
    printf("Enter Name: ");
    scanf("%s",t->name);

    if(f==0)
    {
        return t;
    }
    if(f->link==NULL)
    {
        if(strcmp(f->name,t->name)<0)
        {
            f->link=t;
            return f;
        }
        else
        {
            t->link=f;
            return t;
        }
    }
    if(strcmp(f->name,t->name)>0)
        {
            t->link=f;
            return t;
        }
    for(temp=f;temp->link!=NULL && strcmp((temp->link)->name,t->name)<0; temp=temp->link);

    t->link=temp->link;
    temp->link=t;
    return f;

}
void display(nd *f)
{
    if(f==NULL)
    {
        printf("LL is empty!\n");
        return;
    }
    printf("Contents of LL\n");
    for(;f!=0;f=f->link)
    {
        printf("%s ",f->name);
    }
    return;
}
int main()
{
    int ch;
    nd *first=NULL;
    for(;;)
    {
        printf("1.Insert\n2.Display\n3.Exit\nEnter choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: first=insert(first); break;
            case 2: display(first); printf("\n"); break;
            case 3:exit(0);
        }
        printf("\n");
    }
}
