#pragma once
#include "Vacancy.h"
//Unidirectional association between Moderator and Vacancy 
class ApproveVacancy {
private:
	bool approvalStatus;
	Vacancy* vac1;

public:
	ApproveVacancy();
	ApproveVacancy(bool appStatus);
	~ApproveVacancy();
};
