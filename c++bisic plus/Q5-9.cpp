#include "Q5.h"

int Q5_9()
{
	string word;
	int count = 0;

	cout << "영어 단어를 입력하시오 (끝내려면 done을 입력) : ";
	while ((cin >> word) && word != "done")
		count++;

	cout << "총 " << count << "단어가 입력되었습니다.\n";

	return 0;
}