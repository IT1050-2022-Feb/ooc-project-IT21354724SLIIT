#include "ApproveVacancy.h"
#include <iostream>

ApproveVacancy::ApproveVacancy() {
	//Default constructor
	approvalStatus = false;
}

ApproveVacancy::ApproveVacancy(bool appStatus) {//overloaded constructor
	approvalStatus = appStatus;
}

ApproveVacancy::~ApproveVacancy() {
	//Default destructor
	cout << "ApproveVacancy destroyed" << endl;
}
