#include<iostream>
#include "Employee.h"

using namespace std;
using namespace Records;

int main() {
	cout << "Testing the Employee class" << endl;
	Employee emp;
	emp.setFiestName("noh");
	emp.setLastName("junah");
	emp.setEmployeeNumber(71);
	emp.setSalary(50000);
	emp.promote(50);
	emp.hire();
	emp.display();
}