#include "Q8.h"

// 1, ���� �����ϰ� ��� ������ ���� �Լ�

// 2, 
void song(const char* name = "O, My Papa", int times = 1);

// 3, 
void iqote(int n);
void iqote(double n);
void iqote(char * str);

void iqote(int n)
{
	cout << "\"" << n << "\"";
}

void iqote(double n)
{
	cout << "\"" << n << "\"";
}

void iqote(char * str)
{
	cout << "\"" << str << "\"";
}

// 4, 
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void show_box(const box& box_info);
void calc_box_volune(box& box_info);

void show_box(const box& box_info)
{
	cout << box_info.maker << endl;
	cout << box_info.height << endl;
	cout << box_info.width << endl;
	cout << box_info.length << endl;
	cout << box_info.volume << endl;
}

void calc_box_volune(box& box_info)
{
	box_info.volume = box_info.height * box_info.width * box_info.length;
}


// 5,
void fill(array<double, 4>& da);
void show(array<double, 4>& da);

void fill(array<double, 4>& da)
{
	for (int i = 0; i < 4; i++)
		cin >> da[i];
}

void show(array<double, 4>& da)
{
	for (int i = 0; i < 4; i++)
		cout << da[i] << endl;
}

// 6,
/* a, �ش� �Լ��� �����ε庸�ٴ� ����Ʈ �Ű������� �����ϴ� ���� Ÿ���ϴ�.*/
double mass(double density, double volume = 1);

/*b, ����Ʈ �Ű������� ������ �Ű��������� �ϳ��� ���� �� �ִ�. 
��, �� ���� �ݺ�Ƚ���� int n�� ����Ʈ�� ������ �� ���⿡, �����ε��� Ÿ���ϴ�. */
void repeat(int n, char*);
void repeat(char*);

/*c, average�� �ñ״�ó�� �ٸ����� �����ε��� �� �ִ�. 
������, �� ���¿��� ���ø��� ������� �����غ��δ�.*/
int average(int x, int y);
double average(double x, double y);

template <typename T>
T average(T x, T y);

/*d, � ���� Ÿ�Կ� �����ϴ��Ŀ� ���� �ٸ� ���ϰ��� ������ �ϴ� �Լ� �����ε�� �Ұ����ϴ�.*/

// 7
template <class T>
static T max(T x, T y);

template <class T>
static T max(T x, T y)
{
	return x > y ? x : y;
}


// 8,
template <> box max<box>(box, box);
template <> box max<box>(box x, box y)
{
	x.volume > y.volume ? x : y;
}

// 9,
/*
v1 - float
v2 - float &
v3 - float &
v4 - int
v5 - double
*/