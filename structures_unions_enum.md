## Structures
* Grouping of variables under one name.
* Members make up the structure.
* "struct" tells compiler --> structure is declared.
* Declaration terminated by ";" (structure declaration is a statement).

* __General form:-__
##
	struct struct type_name
	{
		type member_name;
	}structure_variables;
##
	
	struct "addr"-->structure type
	{
		char name[30];      //30bytes
		char street[40];   //40bytes
		char city [20];   //20bytes
		char state [3];  //3bytes
		unsigned long int zip;
	}"addr_info, binfo, cinfo"; --> variables
	
	


### Accessing structure members
* __To access:-__
	structure_name.member_name
	
* addr_info.zip = 12345;

* __To print:-__
	printf("%lu", addr_info.zip);
	
### Structure assignments
* Single assignment statement - assigns info contained in one structure to another structure of same type.
* No need to assign value of each member seperately.

## 
 	#include <stdio.h>
	int main(void)
	{
		struct
		{
			int a;
			int b;
		}x, y;
		x.a=10;
		y=x;		//assign one structure to another structure.   
		printf("%d", y.a);
		return 0;
	}
	
## Arrays of structures
* __To define:-__
	1. Define a structure.
	2. Declare an array variable of that type.

* struct addr addr_info[100];   //100 sets of variables defined in structure "addr".

* __To print:-__
	printf("%lu", addr_info[2].zip);
	
	
## Passing structures to functions

## Passing structure members to functions
* passing member of structure to function --> passing value of that member to function (actual).

##
	struct fred
	{
	char x;        func(mike.x);		    //passes character value of x
	int y;         func2(mike.y);		   //passes integer value of y
	float z;       func3(mike.z);		  //passes float value of z
	char s[10];    func4(mike.s);		 //passes address of string s
	}mike;         func(mike.s[2]);		//passes character value of s[2]
	
##	
	
	To pass the address of an individual structure member:- put "&" before structure name.
	
	func(&mike.x);		    //passes address of character x//
	func2(&mike.y);		   //passes address of integer y//
	func3(&mike.z);		  //passes address of float z
	func4(&mike.s);		 //passes address of string s
        func(&mike.s[2]);	//passes address of character s[2]

## Passing entire structure to functions
* Entire structure is passed using call by value method.
* Using structure as a parameter:- type of argument must match the type of parameter. 

##
	#include<stdio.h>
	struct struct_type
	{
	int a,b;
	char ch;
	};

	void f1(struct struct_type parm);
	int main(void)
	{
		struct struct_type arg;
		arg.a=100;
		f1(arg);
		return 0;
	}
	void f1(struct struct_type parm)
	{
		printf("%d", parm.a);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
