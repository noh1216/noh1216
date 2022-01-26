#include<iostream>
#include "Database.h"

using namespace std;
using namespace Records;

int main() {
	Database myDB;
	Employee& emp1 = myDB.addEmployee("Noh", "Junah");
	emp1.fire();

	Employee& emp2 = myDB.addEmployee("hyun", "doil");
	emp2.setSalary(100000);

	Employee& emp3 = myDB.addEmployee("ray", "beak");
	emp3.setSalary(10000);
	emp3.promote();

	cout << "all employees " << endl << endl;
	myDB.displayAll();

	cout << endl << "current employees" << endl << endl;
	myDB.displayCurrent();

	cout << endl << "former employees" << endl << endl;
	myDB.displayFormer();
}