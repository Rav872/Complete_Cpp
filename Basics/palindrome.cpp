#include<iostream>

using namespace std;

int main()
{
		int n = 0;
		cout << " Enter the number" << "\n";
		cin >> n;
		int number = n;
		int reverse = 0;
		int digit = 0;

		while(n!=0)
		{
				digit = n % 10;
				n = n / 10;
				reverse = reverse*10+digit;
		}
		cout << reverse << "\n";
		if (reverse == number)
		{

				cout<< "Number is a palindrome " << "\n";
		}
		else
		{
				cout<< "Number is not a palindrome " << "\n";
		}



		return 0;
}
