# Principles of OOP
## Encapsulation
* wrapping up of data under a single unit.
* private - accessible bby another part of object.
* public - other parts of prgram may access it even though it is defined within an object.


# Sample C++ program

    #include <iostream>
    using namespace std;
    int main()
    {
      int i;
      cout<<"This is output.\n";
      cout<<"Enter a number: ";
      cin>>i;
      cout << i << "squared is" << i*i << "\n";
      return 0;
    }


* <iostream> supports C++ style I/O operations.
* using namespace std;
* using - informs the compiler to use the std namespace.
* namespace - creates a declarative region in which various program elements can be placed.
* std - simplifies access to the standard library when used.
  
    
