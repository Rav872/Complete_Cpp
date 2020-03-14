 // when we have two function which have same body so what need to define two times instead of that make function template. E.g
 

#include<iostream>

using namespace std;

template<class T>
T max(T x, T y)
{
	return x>y?x:y;
}

int main()
{

		

		int result = max(10,5);
		cout<< "Bigger number is " << result << "\n";
		float res = max(20.5f,16.9f);
		cout<< "Bigger number is " << res << "\n";


		



		return 0;
}
