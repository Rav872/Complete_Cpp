#include<iostream>

using namespace std;

int main()
{
	int basic_salary = 0;
	float allowance_perc = 0;
	float deduction_perc = 0;
	float net_salary = 0;
	cout<< "Enter the basic salary" << "\n";
	cin >> basic_salary;
	cout<< "Enter Allowace percentage" << "\n";
	cin >> allowance_perc;
	cout<< "Enter Deduction percentage" << "\n";
	cin>> deduction_perc;

	net_salary  = (basic_salary + ((allowance_perc/100)*basic_salary)-((deduction_perc/100)*basic_salary));
	cout<< "Net salary is: " << net_salary << "\n";


return 0;
}
