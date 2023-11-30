#include "Q8.h"

// 1, 비교적 간단하고 재귀 동작이 없는 함수

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
/* a, 해당 함수는 오버로드보다는 디폴트 매개변수를 지정하는 것이 타당하다.*/
double mass(double density, double volume = 1);

/*b, 디폴트 매개변수는 오른쪽 매개변수부터 하나씩 가질 수 있다. 
즉, 이 경우는 반복횟수인 int n의 디폴트를 설정할 수 없기에, 오버로딩이 타당하다. */
void repeat(int n, char*);
void repeat(char*);

/*c, average의 시그니처가 다름으로 오버로딩할 수 있다. 
하지만, 이 경우는에는 탬플릿을 만드것이 적절해보인다.*/
int average(int x, int y);
double average(double x, double y);

template <typename T>
T average(T x, T y);

/*d, 어떤 변수 타입에 대입하느냐에 따라 다른 리턴값을 가지게 하는 함수 오버로드는 불가능하다.*/

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