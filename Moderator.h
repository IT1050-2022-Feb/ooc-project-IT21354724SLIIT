#pragma once
#include <string>
#include "User.h"
using namespace std;

// Inheritance realtionship between Moderator and User
//Unidirectional association between employer and moderator
//Unidirectional association between Moderator and Vacancy 
class Moderator :public User {
private:
	string moderatorID;

public:
	Moderator();
	Moderator(string modID, string uName, string mail, string pWord);
	void generateJobReport();
	void generateAccountReports();
	~Moderator();
};