#include<iostream>

using namespace std;


class Base{
		public:
				Base(){ // default or non parameterised constructor

						cout<< " Base class " << endl;

				}
				Base(int x)  // parameterized constructor
				{
						cout<< "Parameterized constructor" << x << endl;

				}

};


class Derived: public Base{
		public:
				Derived(){
						cout<< "Derived Class" <<endl;

				}
				Derived (int a)
				{
						cout<< "Parameterized cons of derived class" << endl;

				}
				Derived(int x, int a) : Base(x)
		{

				cout << " Derived with param cons and base param"<< a << endl;

		}




};
int main()
{
		//	Derived d; // as created derived object d first base class default constructor will call becasue derived is inherited from base class and then Derived class default constructor will call;
		//Derived d(10); //now first base default will call and then derived param cons
		//what if we have to call param of derived and param of base? see next
		Derived (10,12);
		return 0;
}
