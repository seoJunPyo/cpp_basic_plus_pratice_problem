#include "Q14.h"
#include "abstr_emp.h"

int Q14_5()
{
	employee em("Trip", "Harris", "Thumper");
	cout << em << endl;
	em.ShowAll();

	cout << "----------------------------------------------" << endl;
 	manager ma("Amorphia", "Spinderagon", "Nuancer", 5);
	cout << ma << endl;
	ma.ShowAll();
	
	cout << "----------------------------------------------" << endl;
	fink fi("Matt", "Oggs", "Oiler", "Juno Barr");
	cout << fi << endl;
	fi.ShowAll();

	cout << "----------------------------------------------" << endl;
	highfink hf(ma, "Curly Kew");
	cout << hf << endl;
	hf.ShowAll();

	cout << "----------------------------------------------" << endl;
	cout << "���� ����� ���� �ƹ� Ű�� �����ʽÿ�: " << endl;
	cin.get();
	highfink hf2;
	hf2.SetAll();

	cout << "----------------------------------------------" << endl;
	cout << "abstr_emp * ������ ��� : " << endl;
	abstr_emp* tri[4] = { &em, &fi, &hf, &hf2 };
	for (int i = 0; i < 4; i++)
	{
		tri[i]->ShowAll();
		cout << "----------------------------------------------" << endl;
	}

	return 0;
}
