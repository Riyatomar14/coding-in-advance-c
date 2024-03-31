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

#include <iostream>
using namespace std;

class demo
{
    int x;
    static int y;  //z value same in the whole program
    public:
    void getdata(int a)
    {
        x=a;
        y=y+1;
    }
    void putdata()
    {
        cout<<"x="<<x<<"\ty="<<y;
    }
    static void abc()
    {
        cout<<"static varible="<<y;
    }
};
int demo ::y;  //static data member should be define 
int main() {
    demo aa;  //object aa should use x,y only and z also but it is not the part of aa
    aa.getdata(10);
    aa.putdata();
    demo :: abc(); // static member function call by classname
    return 0;
}

# constructors

constructors are the special member function which is used to intialize value of a variable inside an object.

the major point about constructors

1. contructor's name is same as class name.

2. a constructor is automatically invoked as soon as an object of its class is created.

3. a constructor has not any return type not even "void".

4. constructor allows default argument concept.

5. a constructor cannot be inherited.

6. constructor are defined inside public section.

7. constructors cannot be "virtual".

note: constructors divided into three constructors-

#### 1.default constructor- a constructor having no argument.

#include <iostream>
using namespace std;

class demo
{
    int a,b;
    public:
    demo() // default constructor
    {
        a=10;
        b=20;
    }
    void putdata();
    };
void demo :: putdata()
{
    cout<<"a"<<a<<"\tb"<<b;
}
int main()
{
    demo aa;
    aa.putdata();
    return 0;
}

#### 2.parameterized constructor- a constructor having argument.

#include <iostream>
using namespace std;

class demo
{
    int a,b;
    public:
    demo(int m,int n) // Parametrised constructor
    {
        a=m;
        b=n;
    }
    void putdata();
};
void demo :: putdata()
{
    cout<<"a"<<a<<"\tb"<<b;
}
int main()
{
    int x,y; //user defined
    cout<<"enter the two no:";
    cin>>x>>y;
    demo aa(x,y);
    aa.putdata();
    return 0;
}

#### 3.copy constructor-when we need to initialize the variable of an object with the value of variables of another object of same type,then we use the concept of copy constructor.

note: while making copy constructor, first make default(mostly) or parameterised constructor then make copy constructor then same object act as the argument .

example- when we make the class demo
demo aa;
demo bb=aa; or demo bb(aa); //for copy constructor

#include <iostream>
using namespace std;
class demo
{
    int a;
    public:
       demo() //default constructor for the object we intialized in the main 
       {
           a=10;
       }
       demo(demo &z) //&-for the direct access the object 
       {
           a = z.a;
       }
       void putdata()
       {
          cout<<"\na"<<a; 
       }
};
int main() {
    demo aa;
    demo bb(aa);
    demo cc=bb;
    aa.putdata();
    bb.putdata();
    cc.putdata();
    return 0;
}

## constructor overloading 

c++ provides us one provision using which we can incorporate more than one constructor in a single program.but these constructors may have differnt type of argument/different number of arguments.this provision of having more than one constructors in a single program is callcalled constructor overloading.

#include <iostream>
using namespace std;
class demo
{
    int a;
    public:// all the three constructor all at one time --> constructor overloading
       demo() 
       {
           a=10;
       }
       demo(int x) //parameterised constructor
       {
           a=x;
       }
       demo(demo &z) //copy constructor 
       {
           a = z.a;
       }
       void putdata()
       {
          cout<<"\na"<<a; 
       }
};
int main() {
    demo aa;
    demo bb(20);
    demo cc(aa);
    aa.putdata();
    bb.putdata();
    cc.putdata();
    return 0;
}

## destructors ()

like constructors destructors are also membder function whose name is similar to the class name having(~) titled sign ust before it's name.
a destructor is used to destroy object once the object goes out of scope.a destructor has no return gtype as well as it does not take any arguments.  

#include <iostream>
using namespace std;

int count = 0;
class demo
{
  public:
        demo()
        {
            count++;
            cout<<"no of object created:"<<count<<endl;
        }
        ~demo() // destructor --> automatically delete the object as it is out of the scope 
        {
            count--;
            cout<<"no of object destroyed:"<<count<<endl;;
        }
};
int main() {
    demo aa,bb,cc;
    {
        demo dd;
    }

    return 0;
}

# Inheritance

Inheritance is one of the most important feature of object oriented programming .this provides us the capability to re-use the pre-existing code to the new project/new software.it is always better to re-use the pre-existing code rather than developing all over again.this re-usability feature is incorporated by the concept of inheritance.
note: base class(parent class) and derived class(child class).

## types of inheritance -
1.single-the type of inheritance in which one class(parent class) is being inherited by another class(child class).

when one base class is being derived by a single sub-class,this is called single inheritance. it means when there is one base class and it is being derived by another single derived class,then it is called single inheritance.

    /*single inheritance */
    
#include <iostream>
using namespace std;
class A
{
    protected:
    int x;
    public:
    void input()
    {
        cout<<"\nenter the number1:";
        cin>>x;
    }
};
class B:public A
{
    int y;
    public:
    void getdata()
    {
        cout<<"\nenter number2:";
        cin>>y;
    }
    void putdata()
    {
        cout<<"\naddition="<<x+y;
    }
};
int main() {
    B aa; // object intialise with the derived class 
    aa.input();
    aa.getdata();
    aa.putdata();
    return 0;
}  

2.mutiple -the type of inheritance in which more than one class(parent class) is being inherited by another class(child class)

when there are more than one base class is inherited by a single derived class , then it is called the concept of mutiple inheritance.

/* mutiple inheritance */

#include <iostream>
using namespace std;

class A
{
    protected:
    int a;
    public:
    void input()
    {
        cout<<"\nenter the no1:";
        cin>>a;
    }
};
class B
{
    protected:
    int b;
    public:
    void getdata()
    {
        cout<<"\nenter the no2:";
        cin>>b;
    }
};
class c:public A,public B
{
    public:
    void addition()
    {
        cout<<"\naddition ="<<a+b;
    }
};
int main() {
    c aa;
    aa.input();
    aa.getdata();
    aa.addition();
    return 0;
}

3.multi-level-the type of inheritance in which one class inherits other class,and then this other class is being inherited by another.

it is type of of inheritance in which one super class/base class is derived by a child class and then this child class is further derived by another child class and so on.this type of inheritance is called mutilevel inheritance .

/* mutilevel inheritance */

#include <iostream>
using namespace std;
class A
{
    protected:
    int roll;
    public:
    void getroll()
    {
        cout<<"\nenter the roll no.:";
        cin>>roll;
    }
    void putroll()
    {
        cout<<roll;
    }
    
};
class B : public A
{
    protected:
    int sub1,sub2;
    public:
    void getmarks()
    {
        cout<<"enter marks of two subjects;";
        cin>>sub1>>sub2;
    }
    void putmarks()
    {
        cout<<"\nmarks of sub1:"<<sub1;
        cout<<"\nmarks of sub2":<<sub2;
    }
};
class c : public B
{
    int sportsmarks;
    public:
    void getsportsmarks()
    {
        cout<<"\nenter the sports marks:";
        cin>>sportsmarks;
    }
    void total()
    {
        putroll();
        putmarks();
        cout<<"sportsmarks"<<sportsmarks;
        cout<<"\ntotal marks"<<sub1+sub2+sportsmarks;
    }
};
int main() {
     c aa;
     aa.getroll();
     aa.getmarks();
     aa.getsportsmarks();
     aa.total();

    return 0;
}

4.hybrid-  when we combine two or more types of inheritance into one then it is called hybrid inheritance.

when we combine the concept of two or more basic inheritance(single inheritane,multiple inheritance,multi-level inheritance, hierararchical inheritance) then the new type of inheritance is referred to as hybrid inheritance.

#include <iostream>
using namespace std;

class A
{
    public:
    void message()
    {
        cout<<"\ninside class A:";
    }
};
class B: public A
{
    public:
    void display()
    {
        cout<<"\ninside class B:";
    }
};
class C
{
    public:
    void putdata()
    {
        cout<<"\ninside class C:";
    }
};
class D:public B,public C
{
    public:
    void data()
    {
        cout<<"\ninside class D:";
    }
};
int main() {
    D dd;
    dd.message();
    dd.display();
    dd.putdata();
    dd.data();
    return 0;
}

5.hierarchical- in this type of inheritance in which one base class is being inherited by mutiple derived class.

/* hierarchical inheritance*/

#include <iostream>
using namespace std;

class A
{
    public:
    void message()
    {
        cout<<"\nwelcome to inheritance:";
    }
};
class B: public A
{
    public:
    void display()
    {
        cout<<"\ninside class B";
    }
};
class C:public A
{
    public:
    void putdata()
    {
        cout<<"\ninside class C";
    }
};
int main() {
    B aa;
    C bb; // we have to make two object as there are two derived class
    aa.display();aa.message();
    bb.putdata();bb.message();
    return 0;
}

## visiability modifiers(derived class)-

1.private- can inherited only protected and public not privare.protected and public both goes to private.
2.protected - can inherted only protected and public not privare.protected and public both goes to protected.
3.public - can inherted only protected and public not privare.protected goes to protected and pulic goes to public.

