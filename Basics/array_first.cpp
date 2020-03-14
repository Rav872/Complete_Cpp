#include<iostream>
using namespace std;
int main()
{
	int Arr[] = {10,3,4,12,8,67};
	int Brr[6] ={1,2,3};
	for(int i:Arr)  // This loop will iterate ove r physical size of array not only element is stored
	{
			cout<< i << "\n";
	}
	for(int j:Brr) // last 3 items will print 0   
	{
			cout<< j << "\n";
	}
	

	return 0;
}
