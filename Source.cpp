#include "Header.h"

void trafficSignal::setRed(bool temp)
{
	red = temp;
}

void trafficSignal::setYellow(bool temp)
{
	yellow = temp;
}

void trafficSignal::setGreen(bool temp)
{
	green = temp;
}

bool trafficSignal::getRed(void)
{
	return red;
}

bool trafficSignal::getYellow(void)
{
	return yellow;
}

bool trafficSignal::getGreen(void)
{
	return green;
}
