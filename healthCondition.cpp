#include <iostream>
#include <string>
using namespace std;
#include "healthCondition.hpp"

healthCondition::healthCondition() {}

healthCondition::healthCondition(string symp, string CC, string TR, string loc, string TS)
{
    symptoms = symp;
    closeContact = CC;
    testResult = TR;
    travelStatus = TS;
    location = loc;
}

void healthCondition::setHealthCondition()
{
    cin.ignore();
    cout<<"Health condition menu"<< endl;
    cout<<"Please enter the informations about your health conditions"<< endl;
    cout<<"Are you having any Covid-19 symptoms?(yes/no)"<< endl;
    getline(cin, symptoms);

    cout<<"\nHave you had close contact?(yes/no)"<<endl;
    getline(cin, closeContact);

    cout<<"\nWhat is your test result?(positive/negative)"<<endl;
    getline(cin, testResult);

    cout<<"\nHave you travelled outside of campus in the last 14 day?(yes/no)"<<endl;
    getline(cin, travelStatus);

    cout<<"\nWhere are you currently residing?(KTHO/KTDI/KTC/KTF)"<<endl;
    getline(cin, location); 
}

string healthCondition::getLocation() {return location;}

string healthCondition::getTestResult() {return testResult;}
