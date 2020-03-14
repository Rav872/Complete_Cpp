#include<iostream>
using namespace std;


class Chestnut{
		public:	
			static int price;

			static int get_price()
			{

					return price;
			}
};
     int  Chestnut :: price = 20;



int main()
{
		Chestnut ankit; // created diff objects all will share same price
		Chestnut Ravi;
		Chestnut Sawal;
		cout<< Ravi.get_price() <<endl;
		cout<< ankit.get_price()<<endl;
		cout<< Sawal.get_price()<<endl;



		return 0;
}
