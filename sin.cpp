#include<iostream.h>
#include<conio.h>
class employee
{
	int emp_no;
	char emp_name[20];
public:
	void getdata()
	{
		cout<<"Enter name and number for employee:-\t";
		cin>>emp_name>>emp_no;
	}
	void putdata()
	{
		cout<<"Employee details are:-\t"<<emp_no;
		cout<<"\nEmployee name is:-\t"<<emp_name;
	}
};
class fitness : public employee
{
	float height;
	int weight;
public:
	void accept()
	{
		cout<<"Enter height and weight";
		cin>>height>>weight;
	}
	void display()
	{
		cout<<"\nHeight is"<<height<<"Weight is"<<weight;
	}
};
void main
{
	fitness f;
	clrscr();
	f.getdata();
	f.accept();
	f.putdata();
	f.display();
	getch();
}




