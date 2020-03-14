#include<iostream>

using namespace std;
int division(int,int);
int main()
{
        int x= 0,y=0,z=0;
		cout<< "Enter two values " <<endl;
		cin>>x>>y;
	

	/*	try{

				if(y==0 ) // condition check to throw some value and catch it.
						throw x+y;
				cout<<z << endl;
		}
		catch(int a)
		{
				cout<< " Catch successfully " << a << endl;
		}*/
		// we can do same thing using if else statement too but what's the use of exception handling let's see completely. if we need to send two infromation from one function then we can use this like return result if correct and throw exception if wrong.
		try{
			 z = division(x,y);
			 cout<< "Answer is:" << z <<endl;
		}
		
		catch(int c)
		{
				cout<< "Unable to Divide " <<endl;
		}
		return 0;
};
		int division(int a, int b)
		{
				if(b==0) // as we know denominator can not be zero ever.
					throw 1;
				return a/b;
		}


	
