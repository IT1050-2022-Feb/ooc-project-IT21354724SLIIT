#pragma once
#include <string>
#include "Employer.h"
using namespace std;

class Company
{
private:

	int companyRegNo;
	string companyName;
	Employer *emp1;

public:

	Company();
	Company(int cNo, string cName, string empID, string uName, string mail, string pWord);
	void provideContactDetails();
	~Company();
};
