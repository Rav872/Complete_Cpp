#include<iostream>

using namespace std;

int main()
{
		int n = 0;
		cout << " Enter the number" << "\n";
		cin >> n;
		int reverse = 0;
		int digit = 0;
		
					while(n!=0)
					{
					digit = n % 10;
					n = n / 10;
					reverse = reverse*10+digit;
					}
					cout<< reverse << "\n";
			

		return 0;
}
