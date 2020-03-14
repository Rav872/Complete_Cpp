#include<iostream>
using namespace std;

int main()
{
		int year = 0;
		
		int count = 5;
		while(count >0)
		{
		
		cout<< " Enter the year " << "\n";
		cin >> year;
		if( (year % 4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 ==0) )
		{
			cout << "year is leap year" << "\n";
		}
		else 
				cout << " Not a leap year " << "\n";
		count--;
		}
		return 0;
}
