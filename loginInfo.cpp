#include <string>
#include <iostream>
using namespace std;
#include"loginInfo.hpp"

loginInfo::loginInfo() {}

loginInfo::loginInfo(string n, string p)
{
    setNP(n, p);
}

void loginInfo::setNP(string n, string p)
{
    this->userName = n;
    this->password = p;
}

string loginInfo::getUsername() const {return userName;}

string loginInfo::getPassword() const {return password;}

void loginInfo::print()
{
    cout<< userName << endl;
    cout<< password << endl;
}