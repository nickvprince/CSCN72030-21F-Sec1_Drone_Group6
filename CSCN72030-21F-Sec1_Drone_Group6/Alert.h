#pragma once

#include <string>

using namespace std;

class Alert {

public:

	int alertCode;
	string alertMessage;

	Alert(int);

	int getAlertCode();
	string getAlertMessage();
	
	void displayAlert();
	string readAlertMessage(int);
	void updateAlertLog(Alert*);

};

void getAlertLog();
