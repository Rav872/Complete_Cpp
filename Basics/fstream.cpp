#include<iostream>
#include<fstream>
using namespace std;

int main()
{
		string str;
		ofstream object("First.txt");
		object<<"hii"<<endl;
		ifstream input_object("First.txt");
		input_object>>str;
		cout<<str<<endl;
		return 0;
}
