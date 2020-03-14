#include<iostream>

using namespace std;

int main()
{

		int arr[] = {12,67,89,23,44,9,123};

		int minimum = INT_MAX;

		for(int i:arr)
		{
				if( i < minimum)
				{
						minimum  = i;
				}
		}
		cout << "minimum  number is : " << minimum << "\n";


		return 0;
}
