#include<iostream>

using namespace std;

class rectangle{   // we should always keep our data private that is a good practice;
		private: 
				int length;
				int breadth;
		public:
				void set_data(int l,int b)
				{
						if(l>0 && b>0)
						{
								length = l;
								breadth = b;
						}
						else
						{
								length = 0;
								breadth = 0;
						}
				}
				int area()
				{

						return length*breadth;

				}
};

int main()
{
		rectangle r1;
		r1.set_data(10,15);
		cout<< " Area: " << r1.area() << "\n";
		return 0;
}

