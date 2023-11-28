#include "Q4.h"
#include <vector>


// 1,
char actors[30];
short betsie[100];
float chuck[13];
long double dipsea[64];

// 2,
array<char, 30> actors_arr;
array<short, 100> betsie_arr;
array<float, 13> chuck_arr;
array<long double, 64> dipsea_arr;

// 3,
int odds[] = { 1, 3, 5, 7, 9 };

// 4, 
short even = betsie[0] + betsie[99];

// 5,
float ideas[] = { 1, 2 };
void ex_5()
{
	cout << ideas[1];
}

// 6,
char cheeseburger[] = "cheeseburger";

// 7,
string waldorf = "Waldorf Salad";

// 8, 
struct fish
{
	string kind;
	int weight;
	double length;
};

// 9,
fish domi = { "domi", 2, 50.4 };

// 10,
enum Response { No, Yes, Maybe };

// 11,
void ex_11()
{
	double ted = 10.00;
	double* pted = &ted;

	cout << *pted;
}

// 12,
void ex_12()
{
	float treacle[10] = { 1,2,3,4,5,6,7,8,9,10 };
	float* pt = treacle;

	cout << *pt;
	cout << *(pt + 9);
}

// 13,
void ex_13()
{
	int len;
	cin >> len;

	int* arr = new int[len];
	vector<int> vet_arr (len);
}

// 14,
void ex_14()
{
	cout << (int*)"Home of the jolly bytes";
}
// 위 코드는 올바르다. 문자열이 시작되는 주소가 출력된다.

// 15, 
void ex_15()
{
	fish* domi = new fish;
	cin >> domi->kind;
}

// 16, 
void ex_16()
{
	char address[50];

	// 1.
	cin.getline(address, 80);

	// 2.
	cin >> address;

	// 1번 코드에서 2번코드로 교체 시, 화이트 스페이트를 만나면 읽어오는 것을 멈춘다. 
	// 즉 한 단어만 읽는다.
}

// 17,
vector<string> vet_str(10);
array<string, 10> arr_str;
