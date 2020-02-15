#include "stdafx.h"
#include "Window.h"


void Window::openWindow()
{
	wOpen.setState("���� �������");
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
	wOpen.setState("���� �������");
	wOp = false;
}

void Window::openZh()
{
	zhOpen.setState("������ �������");
	zhOp = true;
}

void Window::closeZh()
{
	zhOpen.setState("������ �������");
	zhOp = false;
}

void Window::getState()
{
	if (wOpen.getStatus()) 
	{
		cout << endl << "������ ������� - ";
	}
	else
	{
		cout << endl << "������ �������� - ";
	}
	cout << wOpen.getName() << " - " << wOpen.getState()<<endl;

	if (zhOpen.getStatus())
	{
		cout << endl << "������ ������� - ";
	}
	else
	{
		cout << endl << "������ �������� - ";
	}
	cout << zhOpen.getName() << " - " << zhOpen.getState() << endl;
}

Window::Window()
{
	wOpen.on();
	wOpen.setName("���������/��������� ����");
	wOpen.setState("���� �������");

	zhOpen.on();
	zhOpen.setName("�������� �� ��������/��������� ������");
	zhOpen.setState("������ �������");
}


Window::~Window()
{
}
