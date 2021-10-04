#include<iostream.h>
#include<conio.h>
#include<malloc.h>

struct Node
{
 int info;
 struct Node *link;
}
*First = NULL;
void main()
{
 clrscr();
 struct Node *n1,*n2,*n3,*n4,*n5;
 n1 = (Node*)malloc(sizeof(struct Node));
 n1->info=37;
 n1->link=NULL;
 First=n1;
 n2 = new Node;
 n2->info=74;
 n2->link=NULL;
 n1->link=n2;
 n3 = new Node;
 n3->info=111;
 n3->link=NULL;
 n2->link=n3;
 n4 = new Node;
 n4->info=148;
 n4->link=NULL;
 n3->link=n4;
 n5 = new Node;
 n5->info=185;
 n5->link=NULL;
 n4->link=n5;
 cout<<"\nFirst=>"<<n1->info<<"=>"<<n2->info<<"=>"<<n3->info<<"=>"<<n4->info<<"=>"<<n5->info<<"=> NULL";
 //Displaying the nodes using while loop.
 struct Node *temp;
 temp=First;
 while(temp!=NULL)
 {
  cout<<"\n"<<temp->info;
  temp = temp->link;
 }
  getch();
}
