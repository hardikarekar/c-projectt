# Pointers
* Variable whose value is the address of another variable.
* Syntax:-
	type *var-name;
* Pointer declaration −
	int    *ip;     // pointer to an integer
	double *dp;    // pointer to a double
	float  *fp;   // pointer to a float
	char   *ch   // pointer to character
* Using pointers:- 
	(a) Define pointer variable. 
	(b) Assign address of variable to pointer. 
	(c) Access value at address available in pointer variable.

#include <iostream>

	using namespace std;

	int main () 
	{
		int  var = 20;   // actual variable declaration.
		int  *ip;        // pointer variable 

		ip = &var;       // store address of var in pointer variable

		cout << "Value of var variable: ";
		cout << var << endl;

		// print the address stored in ip pointer variable
		cout << "Address stored in ip variable: ";
		cout << ip << endl;

		// access the value at the address available in pointer
		cout << "Value of *ip variable: ";
		cout << *ip << endl;

		return 0;
	}
Result:- 
	Value of var variable: 20
	Value of *ip variable: 20

## Pointer Arithmetic
## Incrementing a pointer
	
	#include <iostream>

	using namespace std;
	const int MAX = 3;

	int main () 
	{
		int  var[MAX] = {10, 100, 200};
		int  *ptr;

		// let us have array address in pointer.
		ptr = var;
   
		for (int i = 0; i < MAX; i++) {
		cout << "Address of var[" << i << "] = ";
		cout << ptr << endl;
		cout << "Value of var[" << i << "] = ";
		cout << *ptr << endl;

		// point to the next location
		ptr++;
   }
   
   return 0;
}
	
Result:-
	Address of var[0] = 0xbfa088b0
	Value of var[0] = 10
	Address of var[1] = 0xbfa088b
	Value of var[1] = 100
	Address of var[2] = 0xbfa088b8
	Value of var[2] = 200
	
## Decrementing a pointer
	
	#include <iostream>
	\\using namespace std;
	const int MAX = 3;

	int main () 
	{
		int  var[MAX] = {10, 100, 200};
		int  *ptr;

		// let us have address of the last element in pointer.
		ptr = &var[MAX-1];
   
		for (int i = MAX; i > 0; i--) 
		{
		cout << "Address of var[" << i << "] = ";
		cout << ptr << endl;
		cout << "Value of var[" << i << "] = ";
		cout << *ptr << endl;

		// point to the previous location
		ptr--;
		}
   
	return 0;
	}
	
Result:- 
		Address of var[3] = 0xbfdb70f8
		Value of var[3] = 200
		Address of var[2] = 0xbfdb70f4
		Value of var[2] = 100
		Address of var[1] = 0xbfdb70f0
		Value of var[1] = 10

## Pointer Comparisons
	#include <iostream>
	using namespace std;
	const int MAX = 3;
	int main() 
	{
   int  var[MAX] = {10, 100, 200};
   int  *ptr;
   // let us have address of the first element in pointer.
   ptr = var;
   int i = 0;
   
   while ( ptr <= &var[MAX - 1] ) 
	{
      cout << "Address of var[" << i << "] = ";
      cout << ptr << endl;

      cout << "Value of var[" << i << "] = ";
      cout << *ptr << endl;

      // point to the previous location
      ptr++;
      i++;
		}
   
   return 0;
	}
	
Result:- 
	Address of var[0] = 0xbfce42d0
	Value of var[0] = 10 
	Address of var[1] = 0xbfce42d4
	Value of var[1] = 100
	Address of var[2] = 0xbfce42d8
	Value of var[2] = 200


## Passing pointers to functions
* declare function parameter as pointer type.

	#include <iostream>
	#include <ctime>
	using namespace std;
	void getSeconds(unsigned long *par);
	int main () 
	{
		unsigned long sec;
		getSeconds( &sec );
		// print the actual value
		cout << "Number of seconds :" << sec << endl;
		return 0;
	}
	void getSeconds(unsigned long *par) 
	{
		// get the current number of seconds
		*par = time( NULL );
		return;
	}

Result:- 
	Number of seconds :1294450468
	
## Pointers and arrays



























		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	