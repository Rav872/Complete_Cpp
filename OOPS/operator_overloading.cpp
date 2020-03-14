#include<iostream>

using namespace std;

class Complex{
		public:
				int real;
				int img;
		/*		Complex add( Complex c)
				{
						Complex temp;
						temp.real = real + c.real; // here real takes the value of c1 because c1 is calling c2.
						temp.img = img + c.img;
						return temp;


				}*/
				Complex operator+( Complex c)
				{
						Complex temp;
						temp.real = real + c.real; // here real takes the value of c1 because c1 is calling c2.
						temp.img = img + c.img;
						return temp;


				}







};


int main()
{
		Complex c1,c2,c3;
		c1.real = 5; c1.img = 10;
		c2.real = 8; c2.img = 14;

		//c3 = c1.add(c2); //          c will take value of c2.
		c3 = c1 + c2; //using operator overloading now we can add complex number is also similar to int
		cout << c3.real << " + " << c3.img << "i" << "\n"; 
		return 0;
}
