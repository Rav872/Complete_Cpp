#include<iostream>
#include<map>

using namespace std;

int main()
{

		map<int,string> m;

		m.insert(pair<int,string>(1,"RAVI"));
		m.insert(pair<int,string>(2,"SAWAL"));
		m.insert(pair<int,string>(3,"ANKIT"));
		m.insert(pair<int,string>(4,"PATEL"));
		m.insert(pair<int,string>(5,"SLOW"));
		map<int,string>:: iterator itr;

				for(itr=m.begin();itr!=m.end();itr++)
				{
						cout<<itr->first << " " << itr->second <<endl;
				}

				return 0;
}
