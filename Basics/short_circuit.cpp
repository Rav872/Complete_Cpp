#include<iostream>
using namespace std;

int main()
{
		int a = 5, b = 7, i = 5;

		if( a > b && ++i > b) // in this statement a > b is false , so ++i > b will not exexute and i does not increment. This is called short circuit.
		{
				cout << "execution" << "\n";
		}
			cout << i << "\n";
			if( a < b && ++i >b ) // in this one complete statement is not true but a > b is true so it will go on second and i will increment 
			{
					cout << " execution done " << "\n";
			}
			cout << i << "\n";
		return 0;
}
