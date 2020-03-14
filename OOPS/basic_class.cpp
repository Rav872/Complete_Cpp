#include<iostream>

using namespace std;


class square{
		public:
				int side;
				int area()
				{
					return side*side;
				}
				int perimeter()
				{
						return 4*side;
				}
};


int main()
{
	square *p;
	p  = new square;
	p->side = 10;
	p->side = 5;

	cout<< "area of box is: " << p->area() << "\n";




		return 0;
}

