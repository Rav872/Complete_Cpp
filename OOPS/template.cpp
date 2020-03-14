#include<iostream>

using namespace std;
template <class T>

T maximum( T x, T y)
{
		return x>y?x:y;
}
int main()
{
		
		cout<< "Maximum is:"<< maximum('A','B')<<endl;
		return 0;
}
