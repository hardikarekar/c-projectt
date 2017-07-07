#include<iostream.h>
#include<conio.h>
void main()
{
int a[10],i,lar=0;
clrscr();
cout<<"
\
nEnter 10 no.";
for(i=0;i<10;i++)
{
cin>>a[i];
}
for(i=0;i<10;i++)
{
if(lar<a[i])
{
lar=a[i];
}
}
cout<<"\nThe Largest No is "<<lar;
getch();
