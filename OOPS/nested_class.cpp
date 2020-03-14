#include<iostream>

using namespace std;


class Outer{
		public: 
				void func()
				{
						i.display();// can access all public members of inner class in outer class

				}


				class Inner{ // can access only static member of outer class in inner class
						public:
								void display()
								{
										cout<< "Display of Inner class" << endl;

								}



				};

								Inner i; // we can not create object of inner class before declaring it.


};

int main()
{
		Outer o;
		o.func();



		return 0;
}

