#include "Q12.h"

int Q12_2()
{
	myString s1(" and I am a C++ student.");
	myString s2 = "영문 이름을 입력하십시오 : ";
	myString s3;
	
	cout << s2;
	cin >> s3;
	s2 = "My name is " + s3;
	cout << s2 << "." << endl;
	s2 = s2 + s1;
	s2.stringup();
	cout << "다음 문자열에는 \n" << s2 << "\n문자 'A'가" << s2.has('A') << "개가 들어 있습니다.\n";
	s1 = "red";
	myString rgb[3] = { myString(s1), myString("green"), myString("blue") };
	cout << "빛의 삼원색의 이름을 하나만 입력하십시오 : ";
	myString ans;
	bool success = false;
	while (cin >> ans)
	{
		ans.stringlow();
		for (int i = 0; i < 3; i++)
		{
			if (ans == rgb[i])
			{
				cout << "맞았습니다!" << endl;
				success = true;
				break;
			}
		}

		if (success)
			break;
		else
			cout << "다시 입력하십시오 : ";
	}

	cout << "프로그램을 종료합니다" << endl;

	return 0;
}