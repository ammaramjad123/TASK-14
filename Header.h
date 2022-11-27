#pragma once
#include<iostream>
using namespace std;

class trafficSignal
{
private:
	bool red = false;
	bool yellow = false;
	bool green = false;
public:
	void setRed(bool);
	void setYellow(bool);
	void setGreen(bool);
	bool getRed(void);
	bool getYellow(void);
	bool getGreen(void);
};