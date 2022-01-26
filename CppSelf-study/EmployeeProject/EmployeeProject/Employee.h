#pragma once

#include <string>

using namespace std;

namespace Records {
	const int DEFAULT_STARTING_SALARY = 3000;

	class Employee {
	public:
		Employee() = default;
		Employee(const string& firstName, const string lastName);

		void promote(int raizeAmount = 1000);
		void demote(int demeritAmount = 1000);
		void hire();
		void fire();
		void display() const;

		void setFiestName(const string& firstName);
		const string& getFirstName() const;

		void setLastName(const string& lastName);
		const string& getLastName() const;

		void setEmployeeNumber(int employeeNumber);
		int getEmployeeNumber() const;

		void setSalary(int newSalary);
		int getSalary() const;

		bool isHired() const;

	private:
		string mFirstName;
		string mLastName;
		int mEmployeeNumber = -1;
		int mSalary = DEFAULT_STARTING_SALARY;
		bool mHired = false;
	};
}