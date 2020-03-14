#include<iostream>

using namespace std;

class Student{
		private:
				int roll;
				int marks[3];
				int subjects = 3;
				string n;
				int my_marks=0;
				float my_grades = 0;
		public:
				Student(int roll,int marks[3],string name){
						n =  name;

						set_roll(roll);
						set_marks(marks);

						get_roll();
						get_marks();


				}
				int get_roll(){return roll; }
				int* get_marks (){return marks;}
				void set_roll(int r){
						if(r<0)
						{
								roll = 0;
						}
						else
								roll= r;
				}
				void set_marks(int m[]){

						for(int i=0;i<3;i++)
						{
								if(m[i]<0)
								{
										marks[i] = 0;
								}
								else
										marks[i] = m[i];
						}

				}

				void total_marks(int m[]){
						for(int i=0;i<3;i++)
						{
								my_marks += m[i];
						}


				}
				void grades() { 
						my_grades = my_marks / float(subjects); 

				}
				void display()
				{

						cout<< " Name : " << n<< " Rollno: " << roll << "\n";
						cout<< " Total_marks " << my_marks << "\n";
						cout<< " Total Grades " << my_grades << "\n";
				}

};

int main(){
		int arr[3];
		cout<<"enter 3 values" << "\n";
		for(int i=0;i<3;i++)
		{
				cin >>arr[i];
		}


		Student ravi(45,arr,"Ravi");
		ravi.total_marks(arr);
		ravi.grades();
		ravi.display();

		return 0;
}
