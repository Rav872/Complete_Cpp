// static member means a single copy of variable is used by many objects.

#include<iostream>

using namespace std;
class Yours;
class My{
		public: int a;
		private: int b;
		protected: static int count;
		
		My(){
				count=3;


		}
				   friend Yours;
};
class Yours{
		public:
				My m;

				void increase()
				{
					m.a =1;
					m.b=2;
					cout<< ++m.count;
				}

};

int main()
{
		Yours y;
		y.increase();
		return 0;


}
