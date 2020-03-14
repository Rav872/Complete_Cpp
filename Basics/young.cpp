#include<iostream>

using namespace std;

int main()
{

		int age = 0;
		int count = 3;


		while(count>0)
		{
				
				cout<< "Enter the age " << "\n";
				cin >> age;
				if( age >=12 && age < 50)
				{
						cout << "person is young " << "\n";
				}
				else
						cout<< " person is not young" << "\n";
				count--;
		}

		return 0;
}
