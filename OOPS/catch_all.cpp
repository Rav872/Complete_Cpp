// we can have multiple catch handler.

#include<iostream>

using namespace std;

int main()
{
try{
		throw 1.5f; // we can throw only once 
}
catch(int a)
{
		cout<< " Catch int " << a <<endl;
}
catch(float b)
{
		cout<< " catch float " << b << endl;
}

catch(...) // catch all handler must come last because it will be executed if nothing is specified to catch. if it does explain first then no means to declare other handler after this because it will catch all whether it is int,char or class;
{
		cout<< " Catch all " << endl;
}
		return 0;
}


