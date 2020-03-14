#include<iostream>

using namespace std;

int main()
{
	int a,b,c;
	int count  = 3;
	while(count > 0)
	{

		cout<< " Enter 3 numbers " << "\n";
		cin >> a >> b >> c;
	if( a > b && a > c)
	{
			cout<< " A is greater " << "\n";
	}
	else if ( b > c )
	{
			cout << " B is greater " << "\n";
	}
	else
			cout<< " C is greater " << "\n";
	count--;
	}

	return 0;
}

