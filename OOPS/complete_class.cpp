#include<iostream>

using namespace std;

class Rectangle{
		private: 
				int length;
				int breadth;
		public:
				Rectangle(){    // default constructor, when no parameter is passed

				}

				Rectangle(int len,int brd)    // parametereized constructor
				{
					setlength(len);
					setbreadth(brd);
					getlength();
					getlength();
				}

				Rectangle(Rectangle &r)
				{
					length = r.length;
					breadth = r.breadth;

				}
				void setlength(int l)
				{
					if(l<0)
					{
							length = 1;
					}
					else
							length = l;
				}

				void setbreadth(int b) {

					if(b<0)
					{
							breadth = 1;
					}
					else
							breadth = b;

				}

				int getlength()
				{
						return length;

				}
				int getbreadth()
				{
					return breadth;
				}
				int area()
				{
						 cout<< " Area of rectangle is:" <<  getlength() * getbreadth();

				}
				~Rectangle(){};
};


int main()
{
		 Rectangle r(15,20);
		 //Rectangle r2(r);
		 r.area();

		 r.~Rectangle();
		return 0;
}
