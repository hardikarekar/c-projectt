# Classes
* Created using the keyword __class__.
* General form of a __class__
      
        class class_name
        {
          private data and functions
          access-specifier:
            data and functions
          }object-list;

* object-list is optional. 
* access-specifier:- __"public"__, __"private"__ or __"protected"__.
* __public__: data accessible to other parts of your program.
* By default, functions declared within a class are __private__ to that class.
* __protected__: used when inheritance is involved. 

* Example _private_ and _public_ elements grouped together:
      
            class employee
            {
                  char name[80];
                  double wage;
                  public:
                        void putname(char *n);
                        void getname(char *n);
                        void putwage(double w);
                        double getwage();
            }






# Scope resolution operator:
* To access a _global variable_ when there is _local variable_ with same name.

      #include<iostream> 
      using namespace std;
      int x;  // Global x
  
      int main()
      {
            int x = 10; // Local x
            cout << "Value of global x is " << ::x;
            cout << "\nValue of local x is " << x;  
            return 0;
      }
      
* To define a function _outside_ a class.
     
      #include<iostream>
      using namespace std;
      class A
      {
            public:
                  void fun();
      }
      void A::fun()              // Definition outside class using ::
      {
            cout<<"fun() called";
      }
      
      int main()
      {
            A a;
            a.fun();
            return 0;
      }
      
      
     
# Friend Functions
* Access to all private and protected members.
* keyword __friend__.

      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
    
