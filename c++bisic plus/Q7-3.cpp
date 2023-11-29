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
	cout << "관리할 박스 목록 갯수 입력 : ";
	cin >> list_size;

	box *box_list = new box[list_size];

	for (int i = 0; i < list_size; i++)
	{
		cout << "제조사 입력 : ";
		cin.getline(box_list[i].maker, 40);
		cout << "높이 입력 : ";
		cin >> box_list[i].height;
		cout << "너비 입력 : ";
		cin >> box_list[i].width;
		cout << "길이 입력 : ";
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
	cout << "제조사 : " << b.maker << endl;
	cout << "높이 : " << b.height << endl;
	cout << "중량 : " << b.width << endl;
	cout << "길이 : " << b.length << endl;
	cout << "부피 : " << b.volume << endl;
}

static void calc_box_volume(box* b)
{
	b->volume = b->height * b->width * b->length;
}