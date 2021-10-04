#include<iostream.h>
#include<conio.h>

void main()
{
 int arr1[6];
 int x;
 clrscr();
 cout<<"\nPrinting array in reverse order\nBy Parth Shrivastava;-\n";
 for(x=0;x<6;x++)
 {
  cout<<"Enter the "<<x<<"th element:";
  cin>>arr1[x];
 }
 cout<<"\nElements of the array are:\n";
 for(x=0;x<6;x++)
 {
   cout<<"\narr["<<x<<"]="<<arr1[x];
 }
 cout<<"\nElements of the array in reverse order:\n";
 for(x=5;x>=0;x--)
 {
  cout<<"\narr["<<x<<"]="<<arr1[x];
 }
 getch();
}
