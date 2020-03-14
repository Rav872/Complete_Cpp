#include<iostream>
using namespace std;

int main()
{
		int a,b;
		int w,x,y,z,i,left,right;
		cout<< "Enter 2 numbers" << "\n";
		cin>> a >> b;
		x = a&b;
		y=a|b;
		z=a^b;
		w=!a;
		left = x<<1;
		right = x>>1;
		cout <<" a AND b is : " << x << "\n"; 
		cout <<" a OR  b is : " << y << "\n"; 
		cout <<" a XOR b is : " << z << "\n"; 
		cout <<" a NOT b is : " << w << "\n"; 

		
		cout <<" a << b is : " <<  left << "\n"; // answer will be a*2^i
		cout <<" a >> b is : " << right << "\n"; // answer will be a/2^i where i is 1 in our case

return 0;
}
