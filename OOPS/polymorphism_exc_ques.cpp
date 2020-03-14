#include<iostream>

using namespace std;



class Shape{
		public:
				virtual int area(int a,int b) = 0; // abstact classes or pure virtual function
			     virtual void display(int c) = 0;
				
};

class Rectangle: public Shape{
		public:
				int area(int length, int breadth)
				{
						return length * breadth;

				}

				void display(int a){
						cout << "area of rectangle is : " <<  a<<endl; 


				}




};

class Circle: public Shape{
		public:
				int area(int r,int y=0)
				{
					return  3.14* r * r;

				}


				void display(int ar)
				{
					
					cout << "Area of circle is : " << ar<<endl;

				}
};

int main()
{
		int a,b;
		Shape *p = new Rectangle;
		a = p->area(12,10);
		p->display(a);
		p = new Circle;
		b = p->area(3,0);
		p->display(b);
		return 0;

}
