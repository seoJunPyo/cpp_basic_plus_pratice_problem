#include "Q6.h"

int static isgather(char ch);

int Q6_7()
{
	string word;
	int gather_count = 0, consonant_count = 0, other_count = 0;

	cout << "단어들을 입력하시오 (끝내려면 q) : " << endl;
	while ((cin >> word) && word != "q")
	{
		if (!isalpha(word[0]))
			other_count++;
		else if (isgather(word[0]))
			gather_count++;
		else
			consonant_count++;
	}

	cout << "모음으로 시작하는 단어 수 : " << gather_count << endl;
	cout << "자음으로 시작하는 단어 수 : " << consonant_count << endl;
	cout << "기타 : " << other_count << endl;

	return 0;
}

int static isgather(char ch)
{
	return ch == 'a' || ch == 'i' || ch == 'u' || ch == 'e' || ch == 'o';
}