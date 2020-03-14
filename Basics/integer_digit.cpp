#include<iostream>

using namespace std;

int main()
{
		int n = 0;
		cout << " Enter the number" << "\n";
		cin >> n;
		int digit = 0;
		
					while(n!=0)
					{
					digit = n % 10;
				
					cout << " digit is: " << digit << "\n";
					n = n / 10;
					}
			

		return 0;
}
