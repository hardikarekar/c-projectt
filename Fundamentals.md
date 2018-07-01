# Principles of OOP
## Encapsulation
* Wrapping up of data under a single unit.
* private - Accessible by another part of object.
* public - Other parts of prgram may access it even though it is defined within an object.


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


* __iostream__ : supports C++ style I/O operations.
* __using namespace std;__
* __using__ : informs the compiler to use the std namespace.
* __namespace__ : creates a declarative region in which various program elements can be placed.
* __std__ : simplifies access to the standard library when used.
* __int main()__ : in C++ the use of void is redundant and unnecessary. 
* __"cout" and "<<"__ : used for __output__ operations.
* __"cin" and ">>"__ : used for __input__ operations.
* __return 0__ : shows that program is terminated normally.

## New C++ Headers
* <iostream>, <fstream>, <string>, <vector>
* Old style headers are out of date (.h appended)
    
## Namespaces
* Purpose of namespace is to localize the names of identifiers to avoid name collisions.

## Inheritance
* base class

        class building
        {
            int rooms;
            int floors;
            int area;
            public:
                void set_rooms(int num);
                void get_rooms();
                void set_floors(int num);
                void get_floors();
                void set_area(int num);
                void get_area();
        }
   
* General form
    
        class derived-class : access base-class
        {
            body of derived class
        }
        
* "house" is derived from building

        class house : public building
        {
            int bedrooms;
            int bathrooms;
            public:
                void set_bedrooms(int num);
                void get_bedrooms();
                void set_bathrooms(int num);
                void get_bathrooms();
        };
 




































