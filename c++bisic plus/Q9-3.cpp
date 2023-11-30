#include "Q9.h"

struct chaff
{
	char dross[20];
	int slag;
};

int Q9_3()
{
	chaff buffer[2];
	chaff source[2] =
	{
		{"dross_chaff", 2},
		{"dross_dross", 3},
	};
	chaff *pchaffs = new (buffer)chaff[2];

	for (int i = 0; i < 2; i++)
	{
		strcpy_s(pchaffs[i].dross, 20, source[i].dross);
		pchaffs[i].slag = source[i].slag;
	}

	for (int i = 0; i < 2; i++)
		cout << buffer[i].dross << " - " << buffer[i].slag << endl;

	return 0;
}
