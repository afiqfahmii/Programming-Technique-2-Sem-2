#include <iostream>
#include <string>
using namespace std;
#include "hotspotInfo.hpp"

hotspotInfo::hotspotInfo() {}

hotspotInfo::hotspotInfo(string ha, int infNum)
{
    hotspotArea = ha;
    infectedNum = infNum;
    areaStatusCalc();
}

void hotspotInfo::areaStatusCalc()
{
    if(infectedNum <=3){areaStatus = "Safe";}
    else {areaStatus = "Not safe";}
}

void hotspotInfo::print()
{
    cout << "COVID-19 INFO FOR :" << hotspotArea << endl;
    cout << "Area Status: " << areaStatus << endl;
    cout << "Number of Infected People : " << infectedNum << endl << endl;
}

hotspotInfo hotspotInfo::operator+(int i)
{
    hotspotInfo obj;
    obj.hotspotArea = hotspotArea;
    obj.infectedNum = infectedNum + i;

    if(obj.infectedNum <=3){obj.areaStatus = "Safe";}
    else {obj.areaStatus = "Not safe";}

    return obj;
}

string hotspotInfo::getHotspotArea() {return hotspotArea;}