#include<iostream>

using namespace std;

int main()
{
		int a = 4;
		int b = 5;

		if(int exp = b; exp > a) // the life of int exp is existed in only under block of code same as we do in for loop. this is called dynamic declaration
		{
				cout<< " a is smaller " << "\n";
		}




		return 0;
}
