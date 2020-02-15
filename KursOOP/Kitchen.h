#pragma once
#include "Room.h"
#include "Chainik.h"
#include "mikrPech.h"
#include "Door.h"
#include "Window.h"
#include "stirMash.h"

class Kitchen :
	public Room
{
	Window wind;
	Door d;
	Chainik ch;
	mikrPech mikr;
	stirMash stir;
public:
	bool OnOffCh();
	bool OpenCloseWind();
	bool OpenCloseDoor();
	bool OnOffMikr();
	bool OnOffstir();
	bool OpenCloseZH();
	void openDoor();
	void closeDoor();
	void stirON();
	void stirOFF();
	void zhON();
	void chON();
	void mikrON();
	void openW();
	void zhOFF();
	void chOFF();
	void mikrOFF();
	void closeW();
	void getState();
	Kitchen();
	~Kitchen();
};

