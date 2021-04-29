#include<stdio.h>
#include<stdlib.h>
struct Book_Stall
{
	int Book_Id;
	char Book_Title[100];
	char Author[100];
	float price;
};
void Accept(struct Book_Stall *Bs)
{
	printf("Enter Book_Id\n");
	scanf("%d",&Bs->Book_Id);
	printf("Enter Book_Title\n");
	scanf("%s",Bs->Book_Title);
    printf("Enter Author\n");
    scanf("%s",Bs->Author);
    printf("Enter price \n");
    scanf("%f",&Bs->price);
}
void Display(struct Book_Stall Bs)
{
	printf("Book_Id: %d\n",Bs.Book_Id);
	printf("Book_Title: %s\n",Bs.Book_Title);
	printf("Author: %s\n",Bs.Author);
	printf("Price: %f\n",Bs.price);
}
int main()
{
	struct Book_Stall Bs;
	Accept(&Bs);
	Display(Bs);
	return(0);
}
