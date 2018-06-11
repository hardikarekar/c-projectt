## Five Basic Data Types
* character(char) - 8 bits
* integer(int) - 8 bits
* floating-point(float) - 32 bits
* double floating-point(double) - 64 bits
* valueless(void)

## Modifying the basic types
Application:-	
	int - signed, unsigned, short, long, 
	char - signed, unsigned
	
## Identifier Names
* Def:- names of variables, functions, labels and other user-defined objects.
* upper and lowercase are treated as distinct.
	eg: count, Count, COUNT are three seperate identifiers.

## Variables
* Def:- named location in memory, used to hold value, may be mofified by program.
* Declared before used.
* Syntax:- 
	type variable_list;
		type -> valid data type.
		variable_list -> one/more identifier names.
* local variables - inside functions
* formal parameters - in definition of funct parameters
* global variables - outside functions

### Local variables
* Declared inside a function or block. 
* Used by statements that are inside that function/block of code. 
*  eg:-
	#include <iostream>
	using namespace std;
 
	int main () {
   // Local variable declaration:
		int a, b;
		int c;
 
   // actual initialization
		a = 10;
		b = 20;
		c = a + b;
 
		cout << c;
 
		return 0;
	}
	
## Global Variables
* Defined outside of all the functions. 
* Will hold their value throughout the life-time of your program.
* Can be accessed by any function.
* eg:- 
	#include <iostream>
	using namespace std;
 
	// Global variable declaration:
	int g;
 
	int main () {
   // Local variable declaration:
		int a, b;
 
   // actual initialization
		a = 10;
		b = 20;
		g = a + b;
  
		cout << g;
 
		return 0;
}

## Arithmetic Operators
* + 	Adds two operands 												A + B will give 30
* - 	Subtracts second operand from the first 						A - B will give -10
* * 	Multiplies both operands 										A * B will give 200
* / 	Divides numerator by de-numerator 								B / A will give 2
* % 	Modulus Operator and remainder of after an integer division 	B % A will give 0
* ++ 	Increment operator, increases integer value by one 				A++ will give 11
* -- 	Decrement operator, decreases integer value by one 				A-- will give 9


## Relational Operators
* == 	Checks if the values of two operands are equal or not, if yes then condition becomes true. 											(A == B) is not true.
* != 	Checks if the values of two operands are equal or not, if values are not equal then condition becomes true. 						(A != B) is true.
* > 	Checks if the value of left operand is greater than the value of right operand, if yes then condition becomes true. 				(A > B) is not true.
* < 	Checks if the value of left operand is less than the value of right operand, if yes then condition becomes true. 					(A < B) is true.
* >= 	Checks if the value of left operand is greater than or equal to the value of right operand, if yes then condition becomes true. 	(A >= B) is not true.
* <= 	Checks if the value of left operand is less than or equal to the value of right operand, if yes then condition becomes true. 		(A <= B) is true.

## Logical Operators
* && 	Called Logical AND operator. If both the operands are non-zero, then condition becomes true. 										(A && B) is false.
* || 	Called Logical OR Operator. If any of the two operands is non-zero, then condition becomes true. 									(A || B) is true.
* ! 	Called Logical NOT Operator. Use to reverses the logical state of its operand. If a condition is true, then Logical NOT operator will make false. 



## const and volatile qualifiers
* const int a = 10;
* const does not change 
















































