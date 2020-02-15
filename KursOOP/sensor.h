#pragma once
class sensor
{
	bool status;
	string Name;
	string state;
public:
	bool getStatus();
	void on();
	void off();
	void setState(string s);
	void setName(string s);
	string getName();
	string getState();
	sensor();
	~sensor();
};

