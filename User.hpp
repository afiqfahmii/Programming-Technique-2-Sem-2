#include <iostream>
#include <string>
#include "loginInfo.hpp"
#include "healthCondition.hpp"
#include "hotspotInfo.hpp"
using namespace std;

#ifndef USER_H
#define USER_H

class User: public loginInfo{ 
    private:
        string name, address, vaccine, phoneNumber;
        hotspotInfo *college = NULL;
        
    public:
        healthCondition userHealth;

        User();
        User(string Un, string p, string n, string ad, string vc, string pN);
        void print();
        void setCollege(hotspotInfo obj);
        hotspotInfo* getCollege();
};

#endif