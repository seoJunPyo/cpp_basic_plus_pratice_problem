#include "Q7.h"

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

static void show_box(box b);
static void calc_box_volume(box* b);

int Q7_3()
{
	int list_size;
	cout << "������ �ڽ� ��� ���� �Է� : ";
	cin >> list_size;

	box *box_list = new box[list_size];

	for (int i = 0; i < list_size; i++)
	{
		cout << "������ �Է� : ";
		cin.getline(box_list[i].maker, 40);
		cout << "���� �Է� : ";
		cin >> box_list[i].height;
		cout << "�ʺ� �Է� : ";
		cin >> box_list[i].width;
		cout << "���� �Է� : ";
		cin >> box_list[i].length;
		cin.get();
		
		calc_box_volume(&box_list[i]);
	}

	for (int i = 0; i < list_size; i++)
		show_box(box_list[i]);

	delete[] box_list;

	return 0;
}

static void show_box(box b)
{
	cout << "������ : " << b.maker << endl;
	cout << "���� : " << b.height << endl;
	cout << "�߷� : " << b.width << endl;
	cout << "���� : " << b.length << endl;
	cout << "���� : " << b.volume << endl;
}

static void calc_box_volume(box* b)
{
	b->volume = b->height * b->width * b->length;
}