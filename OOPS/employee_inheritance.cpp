#include<iostream>


using namespace std;


class Employee{
		private:
				int id;
				int salary;
				string name;

		public:
				Employee(string name,int id,int salary){

						set_name(name);
						set_id(id);
						set_salary(salary);
				}
				void set_name(string n) {name = n;}
				void set_salary(int s){salary = s;}
				void set_id(int d){id = d;}
				string get_name(){return name;}
				int get_salary(){return salary;}
				int get_id(){return id;}
};

class Full_time : public Employee{
public:

		Full_time(string name,int id,int salary):Employee(name,id,salary){


		}
		int total_salary()
		{

			return 30*12*get_salary();

		}
};


class Part_time: public Employee{
		public:
		Part_time(string name,int id,int salary):Employee(name,id,salary){
		}
				
				int total(int days_in_month)
					{
					return days_in_month*12*get_salary();

					}
};



int main()
{

	//Employee obj("Ravi",45,1200);
	Full_time obj2("Ravi",45,1200);
	Part_time obj3("Navin",30,1000);
	
	cout<< " Info of full time employee: " << obj2.get_name() <<endl<< obj2.get_id() <<endl<< obj2.total_salary() << endl;

	cout<< " Info of Part time employee: " << obj3.get_name() <<endl<< obj3.get_id() <<endl<< obj3.total(10) << endl;


		return 0;
}
