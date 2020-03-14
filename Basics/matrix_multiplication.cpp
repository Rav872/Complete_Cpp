#include<iostream>
using namespace std;

int main()
{
		int arr[2][2] = { 1,2,3,4};
		int brr[2][2] = { 1,0,0,1};
		int crr[2][2];

		for(int i=0;i<2;i++) // for matrix multiplication no. of rows should be equal to no. of column of second matrix
		{
				for(int j=0;j<2;j++)
				{
						crr[i][j] = (arr[i][j] * brr[i][j]) + arr[i+1][j] * brr[i][j+1];  
				}
		}
		for( int i = 0;i<2;i++)
		{
				for(int j=0;j<2;j++)
				{
						cout << crr[i][j];
						cout<< " ";
				}
				cout<< "\n";
		}


		return 0;
}
