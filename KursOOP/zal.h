#pragma once
#include "Room.h"
#include "Door.h"
#include "Window.h"
#include "Televizor.h"

class zal :
	public Room
{
	Window wind;
	Door d;
	Televizor t;
public:
	bool OnOffTel();
	bool OpenCloseWind();
	bool OpenCloseDoor();
	bool OpenCloseZH();
	void openDoor();
	void closeDoor();
	void TelON();
	void TelOff();
	void zhON();
	void openW();
	void zhOFF();
	void closeW();
	void getState();
	zal();
	~zal();
};

