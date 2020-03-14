#include<iostream>
using namespace std;
int main()
{
	int x;
	char y;
	float z;
	double a;
	long double b;
	long int c;

	cout<< " SIZE OF INT: " << sizeof(x) << "\n";
	cout<< " SIZE OF CHAR: " << sizeof(y) << "\n";
	cout<< " SIZE OF FLOAT: " << sizeof(z) << "\n";
	cout<< " SIZE OF DOUBLE: " << sizeof(a) << "\n";
	cout<< " SIZE OF LONG DOUBLE: " << sizeof(b) << "\n";
	cout<< " SIZE OF LONG INT: " << sizeof(c) << "\n";
	cout<< " RANGE OF CHAR " << CHAR_MIN << " " << CHAR_MAX << "\n";
	cout<< " RANGE OF INT " << INT_MIN << " " << INT_MAX << "\n";
	


return 0;
}
