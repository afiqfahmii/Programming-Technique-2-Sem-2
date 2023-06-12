#include <iostream>
#include <string>
#include "loginInfo.hpp"
using namespace std;

#ifndef ADMIN_H
#define ADMIN_H

class admin : public loginInfo{
    private:
        string AdminID;
    public:
        admin(string u, string p, string ID);
        string getAdminID();
        void print();
};

#endif