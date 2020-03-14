#include<iostream>

using namespace std;


class Parent{
		private:
				int a;
		protected:
				int b;
		public:
				int c;
};
class child: public Parent{

		a=15; // it doesn't access because a is private member of paren tclass and we can not access private member in derived class
		b=10;
		c=5;

};
class grandchild: public child{

			a = 30; // will not access as defined above
			b=  25;
			c=  20;


}

int main(){

child obj;
obj.a = 1; // private and protected members are not accessed upon an object so a and b are not accessible here.
obj.b = 2;
obj.c = 3;

return 0;
}
