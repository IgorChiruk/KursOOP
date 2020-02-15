// KursOOP.cpp: ������� ���� �������.

#include "stdafx.h"
#include "Kitchen.h"
#include "zal.h"

using namespace System;

bool cont = true;

void threadFunction()
{
	while (cont) {
		ElPribor::proverka();
		_sleep(100);
	}

}


int main()
{
	setlocale(LC_ALL, "RUS");
	Kitchen k;
	zal z;
	char c;

	Thread^ newThread = gcnew Thread(gcnew ThreadStart(threadFunction));
	newThread->Start();

	
	bool kCont = true;
	while (cont) 
	{
		Console::Clear();
		cout << "��� �������?" << endl;
		cout << "1)����� �� �����" << endl;
		cout << "2)����� � �������" << endl;
		cout << "3)�������� ������" << endl;
		c = _getch();

		switch (c) 
		{

		case 49: 
		{
			kCont = true;
			while (kCont)
			{
				Console::Clear();
				k.getState();
				cout << endl;
				cout << "�� �� �����. ��� �������?" << endl;
				cout << "1)��������/��������� ������" << endl;
				cout << "2)��������/��������� ���������� ������" << endl;
				cout << "3)��������/��������� ������������� ����" << endl;
				cout << "4)�������/������� ����" << endl;
				cout << "5)�������� ������� ������" << endl;
				cout << "6)�������/������� �����" << endl;
				cout << "7)����� �� �����" << endl;

				c = _getch();

				switch (toupper(c))
				{

				case 49:
				{
					if (k.OnOffCh()) {k.chOFF();}
					else if (!k.OnOffCh()) { k.chON();}

					break;
				}

				case 50:
				{
					if (k.OnOffstir()) { k.stirOFF(); }
					else if (!k.OnOffstir()) { k.stirON(); }

					break;
				}

				case 51:
				{
					if (k.OnOffMikr()) { k.mikrOFF(); }
					else if (!k.OnOffMikr()) { k.mikrON(); }
					break;
				}

				case 52:
				{
					if (k.OpenCloseWind()) { k.closeW(); }
					else if (!k.OpenCloseWind()) { k.openW(); }
					break;
				}

				case 53:
				{
					if (k.OpenCloseZH()) { k.zhON(); }
					else if (!k.OpenCloseZH()) { k.zhOFF(); }
					break;
				}

				case 54:
				{
					if (k.OpenCloseDoor()) { k.closeDoor(); }
					else if (!k.OpenCloseDoor()) { k.openDoor(); }
					break;
				}

				case 55:
				{
					kCont = false;
					break;
				}

				}
			}
			break;
		}

		case 50: 
		{
			
			kCont = true;
			while(kCont)
			{
				Console::Clear();
				z.getState();
				cout << endl;
				cout << "�� � �������. ��� �������?" << endl;
				cout << "1)��������/��������� ���������" << endl;
				cout << "2)�������/������� ����" << endl;
				cout << "3)�������� ������� ������" << endl;
				cout << "4)�������/������� �����" << endl;
				cout << "5)����� �� �������" << endl;
				c = _getch();

				switch (toupper(c))
				{

				case 49:
				{
					if (z.OnOffTel()) 
					{ 
						z.TelOff(); 
					}
					else if (!z.OnOffTel()) 
					{ 
						z.TelON(); 
					}

					break;
				}

				case 50:
				{
					if (z.OpenCloseWind()) { z.closeW(); }
					else if (!z.OpenCloseWind()) { z.openW(); }
					break;
				}

				case 51:
				{
					if (z.OpenCloseZH()) { z.zhON(); }
					else if (!z.OpenCloseZH()) { z.zhOFF(); }
					break;
				}

				case 52:
				{
					if (z.OpenCloseDoor()) { z.closeDoor(); }
					else if (!z.OpenCloseDoor()) { z.openDoor(); }
					break;
				}

				case 53:
				{
					kCont = false;
					break;
				}

				}
			}
			break;
		}

		case 51:
		{
			cont = false;
			break;
		}
		}
	}
    return 0;
}
