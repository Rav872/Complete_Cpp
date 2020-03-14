#include<iostream>

using namespace std;

#ifndef x
	#define x 10
	#define PI 3.14
	#define add(x,y) ( x + y)
	#define Matrix(a) ( a*a)
	#define msg(x) #x //define for string
#endif

int main()
{

		cout<< x << endl;
		cout<<add(12,10)<<endl;
		cout<<"Size of 3*3 matrix is:" << Matrix(3)<<endl;
		cout<< msg(hello)<<endl;
		return 0;
}
