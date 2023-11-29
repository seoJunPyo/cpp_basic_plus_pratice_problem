#include "Q6.h"

int Q6_1()
{
	char ch;

	while (cin.get(ch) && ch != '@')
	{
		if (isdigit(ch))
			continue;

		else if (islower(ch))
			cout << (char)toupper(ch);

		else if (isupper(ch))
			cout << (char)tolower(ch);

		else
			cout << ch;
	}

	return 0;
}