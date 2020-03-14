#include<iostream>

using namespace std;

class Demo{
		public:
				Demo(){ // constructor created					
						cout<< "Constructor is called" << endl;

				}
				~Demo(){


						cout<< "Destructor is called" << endl;
				}
};

int main(){
		//Demo d; // when we take object Constructor and destructor both called because memory taken from stack;
		// what if we take object as a pointer
		Demo *p  = new Demo();// only constructor will be called because of heap memory, to call destructor we need to use delete.
		delete p;

		return 0;
}
