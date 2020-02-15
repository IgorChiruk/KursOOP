#pragma once
#include "sensor.h"

class ElPribor
{
	string Name = "Без имени";
	sensor state;
	time_t ONtime=60,timeStart,timeEnd;
public:
	static vector <ElPribor*> mas;
	static void proverka();
	void turnOffByTimer();
	void setONTime(int i);
	bool OnOff();
	void start();
	void finish();
	time_t timeLeft();
	void setName(string s);
	string getName();
	void getStatus();
	ElPribor();
	~ElPribor();
};

