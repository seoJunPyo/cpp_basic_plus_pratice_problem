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

// 6, �⺻ ���������� �μ��� ���޵� ��, ���� ���簡 �Ͼ�� ������ �Լ� ���ο��� ������ ������ �� ����.
//	  ����, const �����ڸ� ������� �ʾƵ� �ǵ����� ���� ���� ������ �Ͼ�� �ʴ´�.

// 7, char�迭, char ������, string ��ü

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

// 9, *"pizza"�� �������� 'p'�� ����Ų��. "taco"[2]�� ���ڿ��� 3��° ����� 'c'�� ����Ų��.

// 10, ����ü�� �⺻ ��������ó�� �Լ��� ���� ���翡 ���� ���޵ȴ�. ���� �⺻ ���������� ���� �������� �����ϸ� �ȴ�.
//     �ּҸ� ���� �����ϱ� ���ؼ� ����ü �����͸� �����Ͽ� �����͸� �μ��� �ѱ�� �ȴ�.
//     ����ü ��ü�� �μ��� ������ ��� ������ �Ѽյ� ���輺�� ������, ����ü�� Ŭ ��� �޸� ������ ���� ����ϰ� ������ ���ɼ��� �ִ�. 

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