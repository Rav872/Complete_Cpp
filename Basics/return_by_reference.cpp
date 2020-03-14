// most of the time we make function as rvalue but in this program we will see how we can use function as lvalue using return by reference;
//
//
#include<iostream>

using namespace std;

int& function( int &a)    // this return a reference 
{
		return a;
}
int main()
{
		
		int x =12;

		function( x )=25;  // function becomes refernce of x, so we can assign value also;
		cout << " x is : " << x << "\n";

		return 0;
}
