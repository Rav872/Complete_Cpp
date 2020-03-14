#include<iostream>

using namespace std;

class Rectangle{
		private:
				int length;
				int breadth;
		public:
				void set_length(int l){
						length = l;
				}
				void set_breadth(int b){ 
						breadth = b;
				}

				int get_length() {return length; }
				int get_breadth(){  return breadth;}

};
class Cuboid : public Rectangle{
		private:
				int height;
		public:
			//	Cuboid(int l=0,int b=0,int h=0){
						//	set_height(h)
						//	set_length(l);
						//	set_breadth(b);
					//	height = h;
			//	}
				void set_height(int h){height = h;}
				int get_height(){  return height;}
				int volume()
				{
						return (get_length() * get_breadth() * get_height());
				}
};

int main(){

		Rectangle obj;
		//Cuboid obj2(10,11,12);
		Cuboid obj2;
		obj2.set_length(11);
		obj2.set_breadth(12);
		obj2.set_height(10);
		cout<< "Expected result is: " << obj2.volume()<< "\n";


		return 0;

};
