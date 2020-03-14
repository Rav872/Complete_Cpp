#include<iostream>

using namespace std;


bool odd_prime(int &num)
{		int count = 0;
		for(int i=1;i<num;i++)
		{
				if(num % 2 !=0 && num % i == 0)
				{
						count++;
				}
		}
		if(count > 2)
				return false;
		else
				return true;
}

int main()
{		bool result;
		int number = 0;
		cout<< " Enter the value to check no. is prime and odd both" << "\n";

		cin>> number;

		result = odd_prime(number);

		cout<< " Expected result is: " << boolalpha << result << "\n";


		return 0;


}
