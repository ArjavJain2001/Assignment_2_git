#include<iostream.h>
#include<conio.h>
#include<malloc.h>

struct Node
{
 int data;
 struct Node *link;
}
*Head = NULL;
void beginn(int value);
void beginn(int value)
{
 struct Node *N0;
 N0 = (Node*)malloc(sizeof(struct Node));
 N0->data=value;

 if(Head==NULL)
 {
  cout<<"No Node exists in the list";
  N0->link=NULL;
  Head =N0;
 }
 else
 {
  N0->link=Head;
  Head = N0;
 }
}

void main()
{
 clrscr();
 int x;
 struct Node *N1,*N2,*N3,*N4,*N5,*N6;
 N1 = (Node*)malloc(sizeof(struct Node));
 N1->data=800;
 N1->link=NULL;
 Head = N1;
 N2 = (Node*)malloc(sizeof(struct Node));
 N2->data=700;
 N2->link=NULL;
 N1->link=N2;
 N3 = (Node*)malloc(sizeof(struct Node));
 N3->data=600;
 N3->link=NULL;
 N2->link=N3;
 N4 = (Node*)malloc(sizeof(struct Node));
 N4->data=500;
 N4->link=NULL;
 N3->link=N4;
 N5 = (Node*)malloc(sizeof(struct Node));
 N5->data=400;
 N5->link=NULL;
 N4->link=N5;
 N6 = (Node*)malloc(sizeof(struct Node));
 N6->data=300;
 N6->link=NULL;
 N5->link=N6;

 struct Node *temp=Head;
 cout<<"Head=>";
 while(temp!=NULL)
 {
  cout<<temp->data<<"==>";
  temp = temp->link;
 }
 cout<<"NULL";

 cout<<"\nEnter the value of new Node to be inserted at Beginning:";
 cin>>x;
 beginn(x);
 temp=Head;
 while(temp!=NULL)
 {
  cout<<temp->data<<"==>";
  temp = temp->link;
 }
 cout<<"NULL";
 getch();
}
