#include "Q12.h"

int Q12_2()
{
	myString s1(" and I am a C++ student.");
	myString s2 = "���� �̸��� �Է��Ͻʽÿ� : ";
	myString s3;
	
	cout << s2;
	cin >> s3;
	s2 = "My name is " + s3;
	cout << s2 << "." << endl;
	s2 = s2 + s1;
	s2.stringup();
	cout << "���� ���ڿ����� \n" << s2 << "\n���� 'A'��" << s2.has('A') << "���� ��� �ֽ��ϴ�.\n";
	s1 = "red";
	myString rgb[3] = { myString(s1), myString("green"), myString("blue") };
	cout << "���� ������� �̸��� �ϳ��� �Է��Ͻʽÿ� : ";
	myString ans;
	bool success = false;
	while (cin >> ans)
	{
		ans.stringlow();
		for (int i = 0; i < 3; i++)
		{
			if (ans == rgb[i])
			{
				cout << "�¾ҽ��ϴ�!" << endl;
				success = true;
				break;
			}
		}

		if (success)
			break;
		else
			cout << "�ٽ� �Է��Ͻʽÿ� : ";
	}

	cout << "���α׷��� �����մϴ�" << endl;

	return 0;
}