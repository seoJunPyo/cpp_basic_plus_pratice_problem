#include "Q5.h"

int Q5_8()
{
	char word[50];
	int count = 0;

	cout << "���� �ܾ �Է��Ͻÿ� (�������� done�� �Է�) : ";
	while ((cin >> word) && strcmp(word, "done") != 0)
		count++;

	cout << "�� " << count << "�ܾ �ԷµǾ����ϴ�.\n";

	return 0;
}