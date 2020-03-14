#include<iostream>

using namespace std;
int main()
{
		int total_amount = 0;

		cout << " Enter your total amount " << "\n";
		cin >> total_amount;

		if( total_amount < 100)
		{
				cout << " No discount available, Pay " << total_amount << "\n" ;
		}
		else if ( total_amount >=100 && total_amount < 500)
		{
				double discount = (10/double(100)) * total_amount;
				cout << " Congrats you got 10 percent discount pay only " << total_amount - discount << "\n";
		}
		else if ( total_amount >=500)
		{
				double discount = (20/double(100)) * total_amount;
				cout << " Congrats you got 20 percent discount pay only " << total_amount - discount << "\n";
		}


		

		return 0;

}
