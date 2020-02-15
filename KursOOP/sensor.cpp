#include "stdafx.h"
#include "sensor.h"


bool sensor::getStatus()
{
	return status;
}

void sensor::on()
{
	status = true;
}

void sensor::off()
{
	status = false;
}

void sensor::setState(string s)
{
	state = s;
}

void sensor::setName(string s)
{
	Name = s;
}

string sensor::getName()
{
	string temp = Name;
	return temp;
}

string sensor::getState()
{
	string temp = state;
	return temp;
}

sensor::sensor()
{
	Name = "no name";
	state = "no state";
	status = false;
}


sensor::~sensor()
{
}
