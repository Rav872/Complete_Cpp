#include<iostream>

using namespace std;
class Car{
		public:
				virtual void start(){

						cout<< " Car Started" << endl;
				}
				virtual void stop(){

						cout<< " Car stopped" << endl;
				}
				// virtual void start() = 0; it's called pure virtual class
				// after  abstract classs we cannot create object of that class means declaring Car c is wrong. only can declare car *c;
};

class Innova: public Car{
		public:
				void start(){

						cout<< " Innova Car Started" << endl;
				}
				void stop(){

						cout<< " Innova Car stopped" << endl;
				}
};
class sonata: public Car{
		public:
				void start(){

						cout<< " soanata Car Started" << endl;
				}
				void stop(){

						cout<< " soanata Car stopped" << endl;
				}

};
int main()
{

		Car *c = new Innova;
		c->start(); // this will call class Car's start function because we have pointer object of Car. So how to resolve if we need to call Innova or swift. assign car class  pointer object to innova or soanata and make car's methods virtual.  

// starting sonata car make a object to pointer c;

		c = new sonata;
		c->stop();

		return 0;


}
