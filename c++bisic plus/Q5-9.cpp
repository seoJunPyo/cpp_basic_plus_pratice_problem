#include "Q5.h"

int Q5_9()
{
	string word;
	int count = 0;

	cout << "���� �ܾ �Է��Ͻÿ� (�������� done�� �Է�) : ";
	while ((cin >> word) && word != "done")
		count++;

	cout << "�� " << count << "�ܾ �ԷµǾ����ϴ�.\n";

	return 0;
}