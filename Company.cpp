#include "Company.h"
#include <iostream>


Company::Company() //default constructor
{
	companyRegNo = 0;
	companyName = "";
	emp1 = new Employer("", "", "", "","");
}

Company::Company(int cNo, string cName, string empID, string uName, string mail, string pWord) //overloaded constructor
{
	companyRegNo = cNo;
	companyName = cName;
	emp1 = new Employer(empID,cName,uName,mail, pWord);
}

void Company::provideContactDetails()
{

}

Company::~Company() //Default destructor
{
	cout << "Company destroyed" << endl;
	delete emp1;
	cout << "Employer also deleted since Company is non existant" << endl;
}