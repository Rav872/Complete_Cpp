// we can use multiple template library with vector such as pop_back();size();remove();

#include<iostream>
#include<vector>

using namespace std;

int main()
{

		vector<int> vect;

		for(int i=0;i<10;i++)
		{
		vect.push_back(i);
		}

		for(auto i : vect)  //simplest iterator over vector
		{
//				cout<< i<<endl;
		}
		// Lets see one more iterator
			vector<int> ::iterator itr;
			for(auto itr = vect.begin();itr!=vect.end();itr++)
			{
					cout<<*itr<<endl;  // using * because itr is pointing to vect
			}
			return 0;
}
