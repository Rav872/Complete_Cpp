// when we have two same name functions aand to avoid name ambiguity we use namespaces. let's see
#include<iostream>

using namespace std;

namespace First{
void func(){

		cout<< "Function First"<<endl;
}
}
namespace Second{
void func(){

		cout<< "Function Second"<<endl;
}
}
//using namespace First; // to avoid written first:: we can create namespace too
using namespace Second;
int main()
{
		func(); // default function will be declared namespace
		First:: func();
		

		return 0;
}
