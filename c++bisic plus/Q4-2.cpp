#include "Q4.h"

int Q4_2()
{
	string name;
	string dessert;

	cout << "이름을 입력하세요.\n";
	getline(cin, name);
	cout << "좋아하는 디저트를 입력하세요.\n";
	getline(cin, dessert);
	cout << "맛있는 " << dessert;
	cout << " 디저트를 준비하겠습니다. " << name << " 님!\n";

	return 0;
}
