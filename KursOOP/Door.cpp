#include "stdafx.h"
#include "Door.h"


bool Door::OpClD()
{
	return op;
}

void Door::openDoor()
{
	dOpen.setState("����� �������");
	op = true;
}

void Door::closeDoor()
{
	dOpen.setState("����� �������");
	op = false;
}

void Door::getState()
{
	if (dOpen.getStatus())
	{
		cout << endl << "������ ������� - ";
	}
	else
	{
		cout << endl << "������ �������� - ";
	}
	cout << dOpen.getName() << " - " << dOpen.getState() << endl;
}

Door::Door()
{
	dOpen.on();
	dOpen.setName("���������/��������� �����");
	dOpen.setState("����� �������");
}


Door::~Door()
{
}
