#include<iostream>

using namespace std;


class NJIT{
		public:
				int rooms;
				int halls;
				void show(){
						cout<< "No. of rooms and halls in njit are " << rooms << halls << endl;
				}
};
class Rutgers: public NJIT{   // rutgers is inherited from njit, it will have all features of njit;
		public:


				int breakout;
				void display()
				{
						cout<< "rutgers" << rooms<< "\n"<< halls <<"\n"<< breakout << endl; 
				}
};


int main()
{
		NJIT obj;
		obj.rooms =12;
		obj.halls = 5;
		Rutgers obj2;
		obj2.rooms = 3;
		obj2.halls = 11;
		obj2.breakout  = 3;
		obj.show();
		obj2.show();
		obj2.display();



		return 0;
}
