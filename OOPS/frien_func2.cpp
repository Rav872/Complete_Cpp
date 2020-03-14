// as we know we can aacess only public member upon object. so what to do to access private and protected members. lets see.

#include<iostream>

using namespace std;
class Rutgers;  // njit should know there is a class named rutgers.
 
class NJIT{
		public: int rooms;
		protected: int students;
		private: int library_books;
		
				void display(){

						 cout<< " display of NJIT" << endl;
				 }
				 friend Rutgers;
};
class Rutgers{ // lets rutgers wants to use all members of njit.
		public:

			NJIT n; // but we know private and private are not accessible upon object so make rutgers a friend of njit.
			void fun(){
			n.rooms = 12;
			n.students = 13;
			n.library_books = 7;
	
					cout<< " BOOKS: "  << n.rooms << " STUDENTS: " << n.students << "LIBRARY_BOOKS: " << n.library_books << endl; 

			}


};

int main()
{
		Rutgers r;
		r.fun();

		return 0;
}
