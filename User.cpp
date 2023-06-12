#include <iostream>
#include <string>
using namespace std;

#include "User.hpp"

User::User(){}

User::User(string Un, string p, string n, string ad, string vc, string pN)
{
    setNP(Un, p);
    name = n;
    address = ad;
    vaccine = vc;
    phoneNumber = pN;
}

void User::print()
{
    cout << "Name        : " << name << endl;
    cout << "Address     : " << address << endl;
    cout << "Vaccine     : " << vaccine << endl;
    cout << "Phone Number: " << phoneNumber << endl << endl;
}

void User::setCollege(hotspotInfo obj)
{
    college = &obj;
}

hotspotInfo* User::getCollege()
{
    return college;
}