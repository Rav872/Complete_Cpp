#include<iostream>

using namespace std;

int main()
{
		int n = 0;
		cout<< " Enter the number " << "\n";
		cin >> n;
		int initial = 2;
		for(int i = 1; i<=n; i++)
		{
				if(n % i == 0)
				{
						cout<< "factor: " << i << "\n";
						
				}
		}

		return 0;

}
