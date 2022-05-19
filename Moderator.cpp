#include "Moderator.h"
#include <iostream>

Moderator::Moderator():User() {
	//Default constructor
	moderatorID = "";
}

Moderator::Moderator(string modID, string uName, string mail, string pWord) :User(uName, mail, pWord){
	moderatorID = modID; //Overloaded constructor
	username = uName;
	email = mail;
	password = pWord;
}

void Moderator::generateJobReport(){

}

void Moderator::generateAccountReports() {

}

Moderator::~Moderator() {
	//Default destructor
	cout << "Moderator destroyed" << endl;

}