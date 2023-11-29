#include "Q7.h"
/*
struct boss;
struct map;

// 2,
void igor();
float tofu(int);
double mpg(double, double);
long summation(long[], int);
double doctor(const char*);
void ofcurse(boss);
char* plot(map*);

// 3,
void cover_nums(int nums[], int size, int num);

void cover_nums(int nums[], int size, int num)
{
	for (int i = 0; 9 < size; i++)
		nums[i] = num;
}

// 4,
void cover_nums_pt(int* start, int* end, int num);

void cover_nums_pt(int* start, int* end, int num)
{
	for (int* i = start; start != end; i++)
		*i = num;
}

// 5,
double get_max(double nums[], int len);

double get_max(double nums[], int len)
{
	double max = DBL_MIN;

	for (int i = 0; i < len; i++)
		max = max > nums[i] ? max : nums[i];

	return max;
}

// 6, 기본 데이터형은 인수로 전달될 때, 값의 복사가 일어나기 때문에 함수 내부에서 원본을 변경할 수 없다.
//	  따라서, const 제한자를 사용하지 않아도 의도하지 않은 값의 변경이 일어나지 않는다.

// 7, char배열, char 포인터, string 객체

// 8,
int replace(char* str, char c1, char c2);

int replace(char* str, char c1, char c2)
{
	int count = 0;

	while (*str)
	{
		if (*str == c1)
		{
			*str = c2;
			count++;
		}

		str++;
	}

	return count;
}

// 9, *"pizza"는 시작점인 'p'를 가리킨다. "taco"[2]는 문자열의 3번째 요소인 'c'를 가리킨다.

// 10, 구조체는 기본 데이터형처럼 함수에 값의 복사에 의해 전달된다. 따라서 기본 데이터형과 같은 형식으로 전달하면 된다.
//     주소를 통해 전달하기 위해서 구조체 포인터를 선언하여 포인터를 인수로 넘기면 된다.
//     구조체 자체를 인수로 전달할 경우 원본이 훼손될 위험성은 없지만, 구조체가 클 경우 메모리 공간을 많이 사용하고 느려질 가능성이 있다. 

// 11, 
int judge(int (*pf) (const char *));

// 12, 
struct applicant {
	char name[30];
	int credit_ratings[3];
};

void show_applicant(applicant);
void show_applicant_pt(applicant *);

void show_applicant(applicant app)
{
	cout << app.name << endl;
	for (int i = 0; i < 3; i++)
		cout << app.credit_ratings[i] << endl;
}



void show_applicant(applicant * app)
{
	cout << app->name << endl;
	for (int i = 0; i < 3; i++)
		cout << app->credit_ratings[i] << endl;
}

// 13,
void f1(applicant* a);
const char* f2(const applicant* a1, const applicant* a2);

typedef void (*pf1) (applicant*);
pf1 p1 = f1;

typedef const char* (*pf2)(const applicant*, const applicant*);
pf2 p2 = f2;

pf1 ap[5];
pf2 pa[10];

*/