#include<iostream>

using namespace std;

class Parent{
		public:
				//void display()
				virtual void display()
				{

					cout<< " Display of parent" << endl;

				}
};
class child: public Parent{
		public:
				void display() //function overriding as child class is borrowed same function from parent class also but defining same function again.
				{
						cout<< " Display of child" << endl;
				}
};



int main()
{
		Parent *obj_p = new child();// or we can write
//		child obj_c;
//		obj_p = & obj_c;

		obj_p->display(); // as we know parent class object will be called but what's the uses to assign Parent class pointer to child class object. and how we can call child class display function now?
		// This is the case virtual function comes under the scene. make parent class function virtual.
		// now parent class display will be called;
		return 0;
}
