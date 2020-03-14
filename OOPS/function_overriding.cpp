#include<iostream>

using namespace std;

class Parent{
		public:
				void display()
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
		Parent obj_p;
		obj_p.display();
		child obj_c;
		obj_c.display(); // obj_c will not print parent class borrowed function because of function overriding.
		// if we don't present display function in child class and tried to run then it obviously run parent class display function

		return 0;
}
