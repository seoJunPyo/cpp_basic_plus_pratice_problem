#include "Q6.h"

int Q6_3()
{
	char choice;

	cout << "다음 선택 사항 중에서 하나를 선택하십시오. (끝내려면 q)\n";
	cout << "c) carema          p) pianist\n";
	cout << "t) tree            g) game\n";
	
	while ((cin >> choice) && choice != 'q')
	{
		switch (choice)
		{
		case 'c' :
			cout << "carmea를 선택!\n";
			break;
		case 'p':
			cout << "pianist를 선택!\n";
			break;
		case 't':
			cout << "tree를 선택!\n";
			break;
		case 'g':
			cout << "game를 선택!\n";
			break;
		default:
			cout << "유효한 선택이 아닙니다.\n";
			break;
		}

		cout << "c, p, t, g 중에서 하나를 선택하십시오. (끝내려면 q) : ";
	}

	cout << "종료!\n";
	return 0;
}