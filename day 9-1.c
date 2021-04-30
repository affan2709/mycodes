#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_ELE 4
struct Stack
{
  int s[MAX_ELE];int top;int size;
};
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
  st.top=-1;
  st.size=MAX_ELE;int ch;
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
