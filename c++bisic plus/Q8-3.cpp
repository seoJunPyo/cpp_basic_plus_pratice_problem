#include "Q8.h"

int Q8_3()
{
	string input;

	cout << "문자열을 입력하시오 (끝내려면 q) : ";
	while (getline(cin, input) && input != "q")
	{
		for (int i = 0; i < input.size(); i++)
			input[i] = toupper(input[i]);

		cout << input << endl;

		cout << "문자열을 입력하시오 (끝내려면 q) : ";
	}

	cout << "끝" << endl;
	return 0;

}