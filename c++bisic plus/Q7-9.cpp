#include "Q7.h"

const int SLEN = 30;

struct student
{
	char full_name[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(student *st);
void display3(student pa[], int n);

int Q7_9()
{
	cout << "학급의 학생 수를 입력하십시오 : ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;

	student* ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);

	if (entered > class_size)
		return 0;

	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}

	display3(ptr_stu, entered);

	delete[] ptr_stu;
	cout << "종료!" << endl;

	return 0;
}


int getinfo(student pa[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		cout << i + 1 << "번째 학생 정보 입력 : " << endl;

		cout << "학생 이름 : ";
		cin.getline(pa[i].full_name, SLEN);
		if (pa[i].full_name[0] == '\0')
			break;

		cout << "취미 : ";
		cin.getline(pa[i].hobby, SLEN);

		cout << "oop Level : ";
		cin >> pa[i].ooplevel;

		while (cin.get() != '\n')
			continue;
	}

	return i;
}

void display1(student st)
{
	cout << "학생 이름 : " << st.full_name << endl;
	cout << "취미 : " << st.hobby << endl;
	cout << "oop Level : " << st.ooplevel << endl;
}

void display2(student *st)
{
	cout << "학생 이름 : " << st->full_name << endl;
	cout << "취미 : " << st->hobby << endl;
	cout << "oop Level : " << st->ooplevel << endl;
}

void display3(student pa[], int n)
{
	for (int i = 0; i < n; i++)
		display1(pa[i]);
}
