#include<iostream>
using namespace std;

int main()
{
		int a = 0 ;
		int b = 0;
		cout << " Enter two number " << "\n";
		cin >> a >>b;
	
			while( a != b )  // subtract smaller number from greater until both number become equal
			{
				if( a > b )
				{
					a = abs(a-b);
				}
				else
						b = abs(a-b);
			}
			cout << "Greatest common divisor is: " << a << "\n";


			
		return 0;
}
