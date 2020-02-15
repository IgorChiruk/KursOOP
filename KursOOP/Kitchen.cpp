#include "stdafx.h"
#include "Kitchen.h"


bool Kitchen::OnOffCh()
{
	return ch.OnOff();
}

bool Kitchen::OpenCloseWind()
{
	return wind.OpClW();
}

bool Kitchen::OpenCloseDoor()
{
	return d.OpClD();
}

bool Kitchen::OnOffMikr()
{
	return mikr.OnOff();
}

bool Kitchen::OnOffstir()
{
	return stir.OnOff();
}

bool Kitchen::OpenCloseZH()
{
	return wind.OpClZH();
}

void Kitchen::openDoor()
{
	d.openDoor();
}

void Kitchen::closeDoor()
{
	d.closeDoor();
}

void Kitchen::stirON()
{
	stir.start();
}

void Kitchen::stirOFF()
{
	stir.finish();
}

void Kitchen::zhON()
{
	wind.closeZh();
}

void Kitchen::chON()
{
	ch.start();
}

void Kitchen::mikrON()
{
	mikr.start();
}

void Kitchen::openW()
{
	wind.openWindow();
}

void Kitchen::zhOFF()
{
	wind.openZh();
}

void Kitchen::chOFF()
{
	ch.finish();
}

void Kitchen::mikrOFF()
{
	mikr.finish();
}

void Kitchen::closeW()
{
	wind.closeWindow();
}

void Kitchen::getState()
{
	Console::Clear();
	wind.getState();
	d.getState();
	mikr.getStatus();
	ch.getStatus();
	stir.getStatus();
	/*ElPribor *temp = &ch;
	ElPribor::mas.insert(ElPribor::mas.end(), temp);
	ElPribor::mas.push_back(temp);*/
}

Kitchen::Kitchen()
{
	setName("Кухня");
}


Kitchen::~Kitchen()
{
}
