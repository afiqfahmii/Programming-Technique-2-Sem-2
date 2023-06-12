#include <iostream>
#include <string>
using namespace std;

#include "admin.hpp"

admin::admin(string u, string p, string ID) : AdminID(ID)
{                           
    setNP(u, p);            
}

string admin::getAdminID(){return AdminID;}

void admin::print()
{
    cout << "Username : " << userName << endl;
    cout << "Password : " << password << endl;
    cout << "AdminID  : " << AdminID  << endl << endl;
}