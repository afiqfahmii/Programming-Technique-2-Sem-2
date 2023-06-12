#include <iostream>
#include <string>
using namespace std;


#ifndef HOTSPOTINFO_H
#define HOTSPOTINFO_H

//-------------------------------------------hotspotInfo class-----------------------------------------//
class hotspotInfo{
    private:
        string hotspotArea, areaStatus;
        int infectedNum;
    public:
        hotspotInfo();
        hotspotInfo(string ha, int infNum);
        void areaStatusCalc();
        void print();
        hotspotInfo operator+(int i);
        string getHotspotArea();
};

#endif