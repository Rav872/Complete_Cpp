#include<iostream>
#include<cmath>
using namespace std;
int main()
{

int a = 0;
int b = 0;
int c = 0;
float root1;
float root2;
cout<< " Enter the value of a , b and c to find roots " << "\n";
cin >> a >> b >> c;

root1 = (b + (sqrt(b*b - (4*a*c))))/(2*a);
root2 = (b - (sqrt(b*b - (4*a*c))))/(2*a);

cout<< "Root1 " << root1 << "\n" << "Root2 " << root2 << "\n";



return 0;
}

