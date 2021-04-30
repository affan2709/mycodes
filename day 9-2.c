#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Stack
{
  int *s;int top;int size;
};
void Create(struct Stack *st)
{
    printf("Enter size of stack\n");
    scanf("%d",&st->size);
    st->s=(int*)malloc(st->size*sizeof(int));
    st->top=-1;
}
void Push(struct Stack *st)
{
  int x;
  printf("Enter the element to be pushed\n");
  scanf("%d",&x);
  if(st->top==st->size-1)
    {printf("Stack Overflow\n");}
  else
  {
    st->top++;
    st->s[st->top]=x;
  }
}
void Pop(struct Stack *st)
{
  int x;
  if(st->top==-1)
    {printf("Stack Underflow\n");}
  else
  {
    x=st->s[st->top--];
    printf("Popped element is %d\n",x);
  }
}
void Display(struct Stack st)
{
  int i;
  for(i=st.top;i>=0;i--)
    {printf("%d\t",st.s[i]);}
  printf("\n");
}
int main()
{
  struct Stack st;
  int ch;
  Create(&st);
  for(;;)
  {
    printf("1:Push\n2:Pop\n3:Display\n4:Exit\n");
    printf("Enter choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:Push(&st);break;
      case 2:Pop(&st);break;
      case 3:Display(st);break;
      default:exit(0);
    }
  }
}
