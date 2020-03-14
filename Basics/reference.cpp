#include<iostream>
using namespace std;

int main()
{


		int x=5;
		
		int &y = x;      // this is called reference x and y have same address and reference must be initialized while declaring it. like int &y; will give error

		x++;
		y++;      // now y will also increment same value;

		cout<< "Address of x: " << &x << " Address of y: " << &y << "\n";
		cout<< "Value of x  : " << x << " Value of y: " << y << "\n";
		return 0;
}


