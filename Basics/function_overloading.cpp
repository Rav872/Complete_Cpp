// function means having multiple function of same name but different argument which can be
// 1. either data types are different
// 2. or no. of arguments are different.

#include<iostream>

using namespace std;

int add(int &x, int &y)
{
		return x + y;
}
int add(int &x,int &y,int &z)
{
		return x+y+z;
}

int main()
{
		
		int a=10, b=20, c = 5, d = 0;

		d = add(a,b,c);
		cout<< " Addition of three variables are: " << d << "\n";
		d = add(a,b);
		cout<< " Addition of first two variables are: " << d << "\n";


		return 0;
}
