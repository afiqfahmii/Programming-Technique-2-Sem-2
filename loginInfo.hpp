#include <string>
#include <iostream>
using namespace std;

#ifndef LOGININFO_H
#define LOGININFO_H

class loginInfo{
    protected:
        string userName, password;
    public:
        loginInfo();
        loginInfo(string n, string p);
        void setNP(string n, string p);
        string getUsername() const;
        string getPassword() const;
        virtual void print();
};

#endif