#include "Q6.h"

int static isgather(char ch);

int Q6_7()
{
	string word;
	int gather_count = 0, consonant_count = 0, other_count = 0;

	cout << "�ܾ���� �Է��Ͻÿ� (�������� q) : " << endl;
	while ((cin >> word) && word != "q")
	{
		if (!isalpha(word[0]))
			other_count++;
		else if (isgather(word[0]))
			gather_count++;
		else
			consonant_count++;
	}

	cout << "�������� �����ϴ� �ܾ� �� : " << gather_count << endl;
	cout << "�������� �����ϴ� �ܾ� �� : " << consonant_count << endl;
	cout << "��Ÿ : " << other_count << endl;

	return 0;
}

int static isgather(char ch)
{
	return ch == 'a' || ch == 'i' || ch == 'u' || ch == 'e' || ch == 'o';
}