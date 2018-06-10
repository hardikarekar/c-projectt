## Structures
* grouping of variables under one name.
* members make up the structure.
* "struct" tells compiler --> structure is declared.
* declaration terminated by ";" (structure declaration is a statement).

* General form:-
	struct struct type_name
	{
		type member_name;
	}structure_variables;

* 	struct "addr"-->structure type
	{
		char name[30];      //30bytes
		char street[40];   //40bytes
		char city [20];   //20bytes
		char state [3];  //3bytes
		unsigned long int zip;
	}"addr_info, binfo, cinfo"; --> variables
	
	


### Accessing structure members
* General form to access:-
	structure_name.member_name
	
* addr_info.zip = 12345;

* To print:-
	printf("%lu", addr_info.zip);
	
### Structure assignments
* single assignment statement - assigns info contained in one structure to another structure of same type.
* no need to assign value of each member seperately.

* 	#include <stdio.h>
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
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	