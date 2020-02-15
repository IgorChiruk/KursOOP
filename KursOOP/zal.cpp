#include "stdafx.h"
#include "zal.h"


zal::zal()
{
	setName("Спальня");
}

bool zal::OnOffTel()
{
	return t.OnOff();
}

bool zal::OpenCloseWind()
{
	return wind.OpClW();
}

bool zal::OpenCloseDoor()
{
	return d.OpClD();
}

bool zal::OpenCloseZH()
{
	return wind.OpClZH();
}

void zal::openDoor()
{
	d.openDoor();
}

void zal::closeDoor()
{
	d.closeDoor();
}

void zal::TelON()
{
	t.start();
}

void zal::TelOff()
{
	t.finish();
}

void zal::zhON()
{
	wind.closeZh();
}

void zal::openW()
{
	wind.openWindow();
}

void zal::zhOFF()
{
	wind.openZh();
}

void zal::closeW()
{
	wind.closeWindow();
}

void zal::getState()
{
	Console::Clear();
	wind.getState();
	d.getState();
	t.getStatus();
	/*ElPribor *temp = &ch;
	ElPribor::mas.insert(ElPribor::mas.end(), temp);
	ElPribor::mas.push_back(temp);*/
}

zal::~zal()
{
}
