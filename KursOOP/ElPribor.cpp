#include "stdafx.h"
#include "ElPribor.h"

vector <ElPribor*> ElPribor::mas;

void ElPribor::proverka()
{
	if (ElPribor::mas.size() != 0)
	{
		for (int i = 0; i < ElPribor::mas.size(); i++)
		{
			ElPribor::mas[i]->turnOffByTimer();
		}
	}
}

void ElPribor::turnOffByTimer()
{
	time_t temp = time(NULL);
	if (temp > timeEnd) 
	{
		this->finish();
	}
}



void ElPribor::setONTime(int i)
{
	if (i > 0) { ONtime = i * 60; }
}

bool ElPribor::OnOff()
{
	return state.getStatus();
}

void ElPribor::start()
{
	timeStart = time(NULL);
	timeEnd = timeStart + ONtime;
	state.on();
	state.setState("Прибор включен");
}

void ElPribor::finish()
{
	timeStart = 0;
	timeEnd = 0;
	state.off();
	state.setState("Прибор выключен");
}

time_t ElPribor::timeLeft()
{
	time_t temp = timeEnd - time(NULL);
	if (temp > 0) { return temp; }
	else { return 0; }
}

void ElPribor::setName(string s)
{
	Name = s;
}

string ElPribor::getName()
{
	string temp = Name;
	return temp;
}

void ElPribor::getStatus()
{
	cout << endl << Name << "-" << state.getState() << "   Таймер установлен на: " << ONtime/60 << " мин" << endl;
	if (state.getStatus()) { cout << "Осталось работать: " << timeLeft() / 60 <<" мин"<< endl; }
}

ElPribor::ElPribor()
{
	state.off();
	state.setName("no name");
	state.setState("Прибор выключен");
	ElPribor *temp = this;
	ElPribor::mas.push_back(this);
}


ElPribor::~ElPribor()
{
}
