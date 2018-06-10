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
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
