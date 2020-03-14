#include<iostream>
#define SIZE 10

using namespace std;

int main()
{
	
		int arr[SIZE];
		int sum =0;
		for(auto& i: arr)
		{
				cin>>i;
		}

		for( auto& i:arr)
		{
				sum  = sum + i;
		}

		cout << " Average of array is: " << (sum /float(SIZE)) << "\n";

		
		


		return 0;
}
