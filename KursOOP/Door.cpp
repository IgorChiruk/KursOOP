#include "stdafx.h"
#include "Door.h"


bool Door::OpClD()
{
	return op;
}

void Door::openDoor()
{
	dOpen.setState("Дверь открыта");
	op = true;
}

void Door::closeDoor()
{
	dOpen.setState("Дверь закрыта");
	op = false;
}

void Door::getState()
{
	if (dOpen.getStatus())
	{
		cout << endl << "Датчик включен - ";
	}
	else
	{
		cout << endl << "Датчик выключен - ";
	}
	cout << dOpen.getName() << " - " << dOpen.getState() << endl;
}

Door::Door()
{
	dOpen.on();
	dOpen.setName("Открывает/закрывает дверь");
	dOpen.setState("Дверь закрыта");
}


Door::~Door()
{
}
