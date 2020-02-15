#include "stdafx.h"
#include "Window.h"


void Window::openWindow()
{
	wOpen.setState("Окно открыто");
	wOp = true;
}

bool Window::OpClZH()
{
	return zhOp;
}

bool Window::OpClW()
{
	return wOp;
}

void Window::closeWindow()
{
	wOpen.setState("Окно закрыто");
	wOp = false;
}

void Window::openZh()
{
	zhOpen.setState("Жалюзи подняты");
	zhOp = true;
}

void Window::closeZh()
{
	zhOpen.setState("Жалюзи опущены");
	zhOp = false;
}

void Window::getState()
{
	if (wOpen.getStatus()) 
	{
		cout << endl << "Датчик включен - ";
	}
	else
	{
		cout << endl << "Датчик выключен - ";
	}
	cout << wOpen.getName() << " - " << wOpen.getState()<<endl;

	if (zhOpen.getStatus())
	{
		cout << endl << "Датчик включен - ";
	}
	else
	{
		cout << endl << "Датчик выключен - ";
	}
	cout << zhOpen.getName() << " - " << zhOpen.getState() << endl;
}

Window::Window()
{
	wOpen.on();
	wOpen.setName("Открывает/закрывает окно");
	wOpen.setState("Окно закрыто");

	zhOpen.on();
	zhOpen.setName("Отвечает за поднятие/опускание жалюзи");
	zhOpen.setState("Жалюзи подняты");
}


Window::~Window()
{
}
