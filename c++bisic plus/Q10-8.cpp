#include "Q10.h"

void show_int(Node* node);

int Q10_8()
{
	List int_list;

	int_list.append(1);
	int_list.append(2);
	int_list.append(3);
	int_list.append(4);
	int_list.append(5);

	cout << "현재 리스트 항목 수 : " << int_list.get_items() << endl;

	int_list.visit(show_int);
	
	Node *popped = int_list.pop();
	cout << "삭제 : ";
	show_int(popped);
	cout << "현재 리스트 항목 수 : " << int_list.get_items() << endl;

	popped = int_list.pop();
	cout << "삭제 : ";
	show_int(popped);
	cout << "현재 리스트 항목 수 : " << int_list.get_items() << endl;

	int_list.visit(show_int);

	return 0;
}

void show_int(Node* node)
{
	cout << node->data << endl;
}