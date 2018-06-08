* Single dimension array
* Generating a pointer to an array
* Passing single dimesion arrays to functions
* Null terminated strings
* Two dimensional arrays
* Multi dimensional arrays
* Array initialization
* Tic tac toe eg

## Single dimension array
* Syntax:-
	type var_name[size];
* element is accesed by indexing array name.

## Generating a pointer to an array
int*ptr; ---> initialized.
int abc[20]; 
ptr = abc; ---> declared.

## Passing single dimensional arrays to functions
* declared - pointer, sized, unsized array
	*void funct (int *x)
	*void funct(int x[10])
	*void funct(int x[])

## Null terminated strings

	#include <stdio.h>
	#include <string.h>
	int main(void)
	{
		char s1[80], s2[80];
		gets(s1);  ----> reads a character from stdin and stores them as a C string into str.
		gets(s2);
	
		printf("lengths: %d %d \n", strlen(s1), strlen(s2)); //strlen
	
		if(!strcmp(s1, s2))							//strcmp
		printf("The strings are equal \n");
	
		strcat(s1, s2);
		printf("%s \n");
	
		strcpy(s1, "This is a test.\n");  		//strcpy
		printf(s1);
	
		if(strchr("hello", 'e'))				//strchr
		printf("e is in hello \n");
	
		if (strstr("hi there", "hi"))			//strstr
		printf("found hi");
	 
		return 0;
	}
	

## Two dimensional(2d) arrays
* Syntax:-
	data_type array_name[x][y];
* initialized in two ways
	first method
		int x[3][4] = {0, 1 ,2 ,3 ,4 , 5 , 6 , 7 , 8 , 9 , 10 , 11};
		
	better method
		int x[3][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,10,11}};
* cout<<"Element at x [" <<i<< "][" <<j<< "]:";


		


























