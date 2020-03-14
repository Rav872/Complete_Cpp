#include<iostream>
#define size 10
using namespace std;


int linear_search( int a[], int num)
{

		for(int i=0;i<size;i++)
		{
				if(a[i] == num)
				{
						return i;
				}
		}
				 
				cout<< " Number is not present in array " << "\n";
		

}
int main()
{

		int arr[size];
		int number = 0;
		cout<< " Enter thee element in array" << "\n";
		for( int i=0;i<size;i++)
		{
				cin>>arr[i];
		}

		cout<< " Enter the elemnt you want to search in array" << "\n";
		cin >> number;
		number = linear_search(arr,number);
		cout<< " Index of that number is: " << number << "\n";
		return 0;
}
