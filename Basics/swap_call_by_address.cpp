// This program is about swapping two integer using call by address because using call by value swapping is not function because it returns a value which can not change actual parameters value but formal parameters.
//
#include<iostream>

using namespace std;


void swap( int *a,int *b)
{
		int temp = 0;
		temp = *a;
		*a = *b;
		*b = temp;
}

int main()
{		
		int x,y=0;
		cout<< " Enter the value in x and y " << "\n";
		cin >> x >> y;

		swap(&x,&y);
		cout << " x is: " << x << " y is: " << y << "\n";


		return 0;
}
