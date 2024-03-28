# function overloading 

function overloading concept of polymorphism enables us to write same name mutiple functions/methods within a program.
but we have a restrictions that all the function having same name must follow-

1.no. of argument

2.type of argument

# object oriented programming (OOPS)

In C language it is POP(procedure oriented programming) but now C with classes,known as C++(C=C+1).

## Class

it is the combionation of data members(variables) and member function put together into a single unit.

# Object - object is an instance of class.

mainly it is a smaller unit which represent the bigger unit, class. object have the features or the property of the class.

class is a user defined data type.thats why we havee to intilize it.it provide security.

# access specifier / visibility modifiers(when used with inhertance)

## 1.private- directly cannot accessed(it give security if you want to access, through public you can access private)

    define data member in function.
    
## 2.public- direct accessed

    define function methods /member function in function 
    
## 3.protected - directly cannot accessed (at inheritance time it give permission to inhert but private cannot be accessed through inhertance)

note: 1. object defined in main function from which it called the public function not the private . If whole class is private then nothuing is accessed from main i.e from object.

2.class function can be defined outside or inside the class ,if we define function inside the class efficiency of the program is low.if you can defined class function outside the class with the help of scope resolution.

/*class function define inside */

#include <iostream>
using namespace std;

class addition
{
private:
    int a, b;

public:
    void getdata()
    {
        cout << "Enter the two numbers: ";
        cin >> a >> b;
    }
    void putdata()
    {
        cout << "Addition is " << a + b;
    }
};

int main()
{
    addition aa;
    aa.getdata();
    aa.putdata();
   
    return 0;
}

/* function outside the class */

#include <iostream>
using namespace std;

class addition
{
private: // data member is defined
    int a, b;

public: //member function defined
    void getdata();
    void putdata();
    
};
// type classname :: functionname(write argument if given)
// outside the class function defined by scope resolution
void addition :: getdata()
{
        cout << "Enter the two numbers: ";
        cin >> a >> b;
    }
void addition :: putdata()
{
        cout << "Addition is " << a + b;
    }
int main()
{
    addition aa; //aa is object
    aa.getdata();
    aa.putdata();
   
    return 0;
}

