#include<iostream>

using namespace std;

int main()
{
		int n=0;
		int fact = 1;
		cout<< " Enter the number " << "\n";
		cin >> n;

		for(int i = n; i>=1;i--)
		{
				fact = fact*i;
		}
		cout<< " Factorial of " << n << " is: " << fact << "\n";

		return 0;
}

