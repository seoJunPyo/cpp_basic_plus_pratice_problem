#include "Q11.h"

int Q11_7()
{
	Complex a(3.0, 4.0);
	Complex c;
	cout << "�ϳ��� ���Ҽ��� �Է��Ͻʽÿ�(�������� q):\n";
	while (cin >> c)
	{
		cout << "c = " << c << '\n';
		cout << "���׺��Ҽ� = " << ~c << '\n';
		cout << "a = " << a << '\n';
		cout << "a + c = " << a + c << '\n';
		cout << "a - c = " << a - c << '\n';
		cout << "a * c = " << a * c << '\n';
		cout << "2 * c = " << 2 * c << '\n';
		cout << "�ϳ��� ���Ҽ��� �Է��Ͻʽÿ�(�������� q):\n";
	}
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}