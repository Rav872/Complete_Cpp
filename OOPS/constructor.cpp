#include<iostream>

using namespace std;
class college{
		private:
				int rooms;
				int store;
		public:
				college (int n, int l){
				rooms = n;
				store = l;

				}
				void display(){
				cout<< " no.of rooms in college " << rooms << "\n" <<  "no. of store in college" <<  store << "\n";
				
				}
};


int main()
{
		college njit(15,20);
		njit.display();



		return 0;
}

