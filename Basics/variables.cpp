#include<iostream>
using namespace std;

int main(){

	long int a = 12L;
	int b = 12.00002; // generates a warning to change value in integer but print integer value if forcefully execute;
	int c = 023;
	int d = 0x54;
	cout << a << "\n" << b << "\n" << c << "\n" << d << "\n";



return 0;
}
