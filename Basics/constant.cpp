#include<iostream>

using namespace std;

class constant {
		public:
				const int x = 10;
				int y = 20;
			/*	void increment()
				{

						x++; // value won't increment because x is const.
						cout<< "Value of x is :" << x << endl;
				}*/
				void increment() const // this will also not work because function is constant
				{

						y++; // value won't increment because x is const.
						cout<< "Value of x is :" << x << endl;
				}

};

int main(){

		constant c;
		c.increment();

		return 0;

}
