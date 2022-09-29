/*#include<iostream>
using namespace std;

class Base{

public:
    int base;
    Base(int base){
        this->base = base;
    }
    virtual void display() = 0;
    //{cout<<"This is a base class display\n";}
};

class Derived1 : public Base{
    int derived1;
public:
    Derived1(int base, int derived) : Base(base){
        derived1 = derived;
    }
    void display(){
        cout<<base<<" This is a derived class display "<<derived1<<endl;
    }
};

class Derived2 : public Base{
    int derived2;
public:
    Derived2(int base, int derived) : Base(base){
    derived2 = derived;
    }
    void display(){
        cout<<base<<" This is a derived class display "<<derived2<<endl;
    }
};

int main(){
    Base *b[2];
    Derived1 d(5,10);
    Derived2 d2(25,20);
    b[0] = &d;
    b[1] = &d2;
    b[0]->display();
    b[1]->display();
    return 0;
}*/


#include<iostream>
using namespace std;

class A
{
int x;
public:
A(int i) { x = i; }
void print() { cout << x; }
};

class B: virtual public A
{
public:
B():A(10) { }
};

class C: virtual public A
{
public:
C():A(10) { }
};

class D: public B, public C {
};

int main()
{
	D d;
	d.print();
	return 0;
}
