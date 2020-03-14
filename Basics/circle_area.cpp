#include<iostream>
using namespace std;

int main()
{
	float pi = 3.145f;
	int radius = 0;
	float area = 0;
	cout<< " Enter the radius " << "\n";
	cin>> radius;
	
	area = pi*radius*radius;

	cout<< " Area of circle is: " << area << "\n";

return 0;
}
