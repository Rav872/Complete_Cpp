// it is doubly link_list, we do not need to write complete program to use link list.c++ has inbuilt feature to use linklist using stl libraries. for single linklist we use forward_list

#include<iostream>
#include<list>

using namespace std;

int main()
{

		list<int> l;

		for(int i=0;i<10;i++)
		{
		l.push_back(i);
		}

		for(auto i : l) 
		{
//				cout<< i<<endl;
		}
		
			list<int> ::iterator itr;
			for(auto itr = l.begin();itr!=l.end();itr++)
			{
					cout<<*itr<<endl;  // using * because itr is pointing to vect
			}
			return 0;
}
