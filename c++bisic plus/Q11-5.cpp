#include "Q11.h"

int Q11_5()
{
	Stonewt stA(200.12);
	Stonewt stB(20, 12.5);
	Stonewt temp;

	cout << "���� ǥ�� : " << stA << endl;

	stA.set_dbl_pound_mode();
	cout << "�ε��Ҽ��� ǥ�� :" << stA << endl;

	stA.set_int_pound_mode();
	cout << "���� ǥ�� :" << stA << endl;

	temp = stA + stB;	
	cout << "stA + stB : " << temp << endl;
	cout << "stA - stB : " << stA - stB << endl;
	cout << "stA * stB : " << stA * stB << endl;
	cout << "temp * 2.5 : " << temp * 2.5 << endl;
	cout << "3.5 * temp : " << 3.5 * temp << endl;

	return 0;
}