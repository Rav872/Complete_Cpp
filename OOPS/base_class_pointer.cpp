#include<iostream>

using namespace std;


class Base{
		public:
				void func1(){

				cout<< " Func1 of base class" << endl;

				}
};

class Derived: public Base{

		public:
				void func2()
				{


						cout<< " Func2 of derived class" <<endl;
				}

};

int main()
{
	Base a;
	//Derived *p = &a;  //this is wrong becasue can't make any basic function as advance one.
	//p->func1(); // can call only Base class function because of base class object pointer. it doesn't mean that we can call derived function also.
	//p->func2();
//what if take derived class pointer?
Derived d;
Base *ptr = &d; // can access only base class methods. 
ptr->func1();
d.func1();
d.func2();
		return 0;
}
