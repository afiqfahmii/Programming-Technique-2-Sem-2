#include <iostream>
#include <string>
using namespace std;

#ifndef HEALTHCONDITION_H
#define HEALTHCONDITION_H

class healthCondition{
    private:
        string symptoms, closeContact, testResult, travelStatus, location;
        
    public:
        healthCondition();
        healthCondition(string symp, string CC, string TR, string loc, string TS);
        void setHealthCondition();// location == ktdi/ktho && TR == positive{+1 dekat infectednummber dalam hotspotinfo}
        string getTestResult();
        string getLocation();
};

#endif