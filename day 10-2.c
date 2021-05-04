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

    if(f==0) //empty
    {
        return t;
    }
    if(f->link==NULL) //only one name
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
nd *delete_pos(nd *f)
{
    int n,count=0;
    nd *prev,*next;
    if(f==NULL)
    {
        printf("LL is empty.\n");
        return 0;
    }
    printf("Enter the node you want to delete: ");
    scanf("%d",&n);
    for(next=f;next!=NULL;next=next->link,count++);
    if(n<=0 || n>count)
    {
        printf("Invalid Position\n");
        return f;
    }
    if(n==1 && count==1)
    {
        printf("Node deleted is: %s\n",f->name);
        free(f);
        return 0;
    }
    if(n==1)
    {
        next=f;
        printf("Node deleted is: %s\n",next->name);
        f=f->link;
        free(next);
        return f;
    }
    n--;
    for(prev=0,next=f;next->link!=0 && n>0;prev=next,next=next->link, n--);

    printf("Node deleted is: %s\n",next->name);
    prev->link=next->link;
    free(next);

    return f;
}
nd *delete_name(nd *f)
{
    nd *prev,*next;
    int count=0;
    char key[20];
    if(f==NULL)
    {
        printf("LL is empty.\n");
        return 0;
    }
    printf("Enter the name you want to delete: ");
    scanf("%s",key);
    if(f->link==NULL && strcmp(f->name,key)==0)
    {
        printf("Node deleted is: %s\n",f->name);
        free(f);
        return 0;
    }
    for(prev=0,next=f;next!=0 && strcmp(next->name,key)!=0;prev=next,next=next->link);
    if(next==0)
    {
        printf("Node not found\n");
        return f;
    }
    printf("Node deleted is: %s\n",next->name);
    if(next->link == 0)
    {
        free(next);
        prev->link=0;
        return f;
    }
    prev->link=next->link;
    free(next);
    return f;

}
int main()
{
    int ch;
    nd *first=NULL;
    for(;;)
    {
        printf("1.Insert\n2.Display\n3.Delete at pos\n4.Delete by name\n5.Exit\nEnter choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: first=insert(first); break;
            case 2: display(first); printf("\n"); break;
            case 3: first=delete_pos(first); break;
            case 4: first=delete_name(first); break;
            case 5: exit(0);
        }
        printf("\n");
    }
}
