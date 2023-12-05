#include "Q13.h"
#include "dma.h"
#include <string>

const int SIZE = 4;

int Q13_3()
{
	DMA *p_dma[SIZE];
	string temp_label;
	int temp_rating;
	string temp_str;
	int choice;

	for (int i = 0; i < SIZE; i++)
	{
		cout << "�� ���� �Է��Ͻʽÿ� : ";
		getline(cin, temp_label);
		cout << "������ �Է��Ͻʽÿ� : ";
		cin >> temp_rating;

		cout << "1) DMA         2)lacksDMA         3)hadDMA" << endl;
		cout << "�����ϰ��� �ϴ� DMA�� �����ϼ��� : ";

		while ((cin >> choice) && (choice < 1 || choice > 3))
			cout << "1 ~ 3���̿��� �����ϼ��� : ";

		while (cin.get() != '\n')
			continue;

		switch (choice)
		{
		case 1 :
			p_dma[i] = new baseDMA(temp_label.c_str(), temp_rating);
			break;

		case 2 : 
			cout << "�÷��� �Է��Ͻʽÿ� : ";
			getline(cin, temp_str);

			p_dma[i] = new lacksDMA(temp_str.c_str(), temp_label.c_str(), temp_rating);
			break;

		case 3: 
			cout << "��Ÿ�ϸ� �Է��Ͻʽÿ� : ";
			getline(cin, temp_str);
	
			p_dma[i] = new hasDMA(temp_str.c_str(), temp_label.c_str(), temp_rating);
			break;
		}
	}

	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		p_dma[i]->Veiw();
		cout << endl;
	}

	cout << endl << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << p_dma[i];
	}

	return 0;
}