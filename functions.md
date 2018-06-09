## General form of function
	ret-type func-name(para-list){
	// body
	}
	

	
## Scope rules :-
* different scope : code from one function cannot interact with code from another function.
* static storage class ---> causes compiler to inspect local variable as global variable, 
							limits its scope within function. 
* Cannot define function within function.	



## Function arguments 
* If func-->called by passing argument, arguments are used by the function.
* If the argument-->not passed while invoking a function, the default values(values passed to argument in function prototype) are used.

## Call by Value

	#include<stdio.h>

	int sqr(int x);

	int main(void)
	{
		int t=10;
		printf("%d %d", sqr(t), t);
		return 0;
	}

	int sqr(int x)
	{
		x=x*x;
		return(x);
	}

* value of arg to sqr(), copied into the param x.
* when x=x*x takes place, var x is modified.
* var t used to call sqr(), has the value of 10.

Note: It is copy of value of arg that is passed into func. What occurs inside the func has no effect on the var used in call.




## Calling functions with arrays



## argc and argv
* argc - Holds the number of arguments on the command line. 
		 Is an integer
* argv - Each element in this array points to command line argument.

* Syntax:- 
	char *argv[];
	
## Multiple indirection:- 
* lkadslkasd
* dskakdas





























































