#include<iostream>
using namespace std;

class MyException: exception // exception is option to write it's inbuilt class
{



}; // we can throw anything int,str,float or even class too.

int main()
{
		int y=0;

		try{
				if(y==0)
						throw MyException();
		}
		catch( MyException)
		{
				cout<< "Catch Successfully" <<endl;
		}
		
		return 0;
}
