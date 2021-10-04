#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
 char ar[30];
 int i,size;
 char *ptr;
 ptr =ar;
 clrscr();
 cout<<"\nEnter the string:\n";
 cin.getline(ar,30);
 cout<<"\nEntered string is : "<<ptr<<endl;
 size = strlen(ar);
 cout<<"Length of the string = "<<size<<endl;
 cout<<"Address of the characters entered in the string :"<<endl;
 for(i=0;i<size;i++)
 {
  cout<<"\t"<<i+1<<" "<<ar[i]<<" "<<&ptr+i<<endl;
 }


 getch();
}

