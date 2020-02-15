#pragma once
#include "sensor.h"

class Window
{
	sensor wOpen, zhOpen;
	bool wOp = false, zhOp = false;
public:
	void openWindow();
	bool OpClZH();
	bool OpClW();
	void closeWindow();
	void openZh();
	void closeZh();
	void getState();
	Window();
	~Window();
};

