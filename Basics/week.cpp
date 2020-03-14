#include<iostream>

using namespace std;

int main()
{
		int day_no = 0;
		int count  = 5;
		while(count > 0)
		{
				cout << " Enter day number " << "\n";
				cin >> day_no;
				switch(day_no){
						case 1: 
								cout<< " Day is Monday " << "\n";
								break;
						case 2: 
								cout<< " Day is Tuesday" << "\n";
								break;
						case 3: 
								cout<< " Day is Wednesday" << "\n";
								break;
						case 4: 
								cout<< " Day is Thursday" << "\n";
								break;
						case 5: 
								cout<< " Day is Friday" << "\n";
								break;
						case 6: 
								cout<< " Day is Staurday " << "\n";
								break;
						case 7: 
								cout<< " Day is Sunday " << "\n";
								break;
						default: 
								cout<< " Invalid Input" << "\n";
								break;
				}
				count--;
		}




		return 0;
}
