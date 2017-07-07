#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
	float p;
	char name[10];
public:
	student(char n[], float per)
	{
		strcpy(name,n);
		p=per;
	}
	void display()
	{
		cout<<"\n\nName of student:"<<name;
		cout<<"\nPercentage of student:"<<p;
	}
};
void main()
{
	char n[10];
	float per;
	cout<<"\nEnter name and Percentage";
	cin>>n>>per;
	student s(n,per);
	clrscr();
	s.display();
	getch();
}
