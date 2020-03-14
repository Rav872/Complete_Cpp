#include<iostream>
using namespace std;


int main()
{	
		
		int x = 5;
	
		int arr[5] = {1,2,7,4,5};
		int *p=&x;  // pointer p can only store address;
	//	int *q = arr[1]; this is wrong because pointer q can not take value  or int *q = &arr[1] is correct;
		int *q;
		int *ptr;
	//	cout<< "Enter value in ptr" << "\n";
	//	cin >> *ptr; segmentation fault if try to other than address
		q = new int[10]; // new assign a memory in heap
		q = arr;	
		cout<< p << "\n" << *p << "\n";
		cout << *(q+2);

	

return 0;
}
