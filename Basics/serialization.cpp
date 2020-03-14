#include<iostream>
#include<fstream>

using namespace std;

class Student{
		public:
				string name;
				int id;
				string branch;

				friend ofstream  & operator<<( Student &s, ofstream &out_obj);
};
ofstream & operator<<( Student &s, ofstream &out_obj)
{
		out_obj<<s.name<<endl;
		out_obj<<s.id<<endl;
		out_obj<<s.branch<<endl;
		return out_obj;
}

int main()
{
	Student s1;
	s1.name = "Ravinder";
	s1.id = 31462074;
	s1.branch = "CE";

	ofstream out_obj;
	out_obj.open("Info.txt");
	out_obj<<s1;
//	out_obj<<s1.name<<s1.id<<s1.branch<<endl; 
	out_obj.close();
	// this is simple way to write in a file but can't we write only single class object to file and write complete info. of that class which is called serialization. 
	// Yes we can achieve this using operator overloading. let overload insertion operator.


		return 0;

}
