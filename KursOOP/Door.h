#pragma once
#include "sensor.h"

class Door
{
	sensor dOpen;
	bool op = false;
public:
	bool OpClD();
	void openDoor();
	void closeDoor();
	void getState();
	Door();
	~Door();
};

