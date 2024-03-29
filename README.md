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
// type classname :: functionname(write argument if any)
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

# array of object and object of array

## array of object - let xyz be class and aa be object 

xyz aa[5]; // aa object has its own array 

## object of array - means array inside the class , so object can also access this array

class xyz
{
  int a[10];
};
int main()
{
xyz aa; // aa object can access the array inside the class
}

![image](https://github.com/Riyatomar14/coding-in-advance-c/assets/143107173/06ca9c49-fcc7-48bf-a0b2-0e0687d5343b)

# object as function argument 


#include <iostream>
using namespace std;

class time
{
    private:
    int h, m;

    public:
    void getdata()
    {
        cout << "Enter the hour and min: ";
        cin >> h >> m;
    }
    void putdata()
    {
        cout << "The total hour is " << h << " and the total min is " << m << endl;
    }

    // Function to add two time objects
    void time :: sum(time t1,time t2)
    {
        h = (t1.m + t2.m) / 60;
        m = (t1.m + t2.m) % 60;
        h = h + t1.h + t2.h;
    }
};

int main()
{
    time t1, t2, t3;
    t1.getdata();
    t2.getdata();
    t3.sum(t1, t2); // Call sum as a member function of t3
    t1.putdata();
    t2.putdata();
    t3.putdata();

    return 0;
}

# friend function-

we know that the private section of class is accessed only and only through the public section of the same class.

what if, we want to give access to private member, a function outside the class . in such circumstances we use the concept of friend function.

### key point-

1.a friend function cannot be called using a object of the class.it is called like a normal function.

2. friend function can use the resources of a class only using an object of the same class.

3. usually a friend function has object as an argument.

4. it does not affect by private or public.

#include <iostream>
using namespace std;

class demo
{
    int a,b;
    public:
    void getdata();
    friend int sum(demo);
};
void demo:: getdata()
{
        cout<<"enter two numbers:";
        cin>>a>>b;
}
int sum(demo aa) //declare as a normal function
{
    return(aa.a+aa.b);
}
int main() {
    demo aa;
    aa.getdata();
    cout<<"addition"<<sum(aa);

    return 0;
}

![Screenshot 2024-03-29 003748](https://github.com/Riyatomar14/coding-in-advance-c/assets/143107173/e7b32ceb-f414-44ea-b48e-52ade9a14aa7)

# static member 

there are two type of static members-

1.static data member  2.static member function

## 1.static data member(variable)

a) it is intialized to zero , whenever the first object of its class is created.no other intialization is permitted .

b) for making any data member static we use "static" keyword.example - static int x;

c) only one copy of static  data  member is created and shared by all. means if more than one object is created then they all have same data member value or variable value and accesssed by any object.

d) it is visiblility in entire program.

e) it is not the part of object and thats why static data member is indepedent  but all object can access .

## static program 

#include <iostream>
using namespace std;

class demo
{
    int x,y;
    static int z;  //z value same in the whole program
    public:
    void getdata(int a,int b)
    {
        x=a;
        y=b;
        z=z+1;
    }
    void putdata()
    {
        cout<<"x="<<x<<"\ty="<<y<<"\tz="<<z;
    }
};
int demo ::z;  //static data member should be define 
int main() {
    demo aa,bb;  //object aa should use x,y only and z also but it is not the part of aa
    aa.getdata(5,10);
    bb.getdata(20,30);
    aa.putdata();
    bb.putdata();
    return 0;
}

## 2.static member function

1.static member function can access only static data members .

2.also static member function cannot be part of object and hence independent . and hence call by using class name example- classname:: functionname


