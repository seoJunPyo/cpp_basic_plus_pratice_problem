#include "Q12.h"

int Q12_4()
{
	Stack2 A(5);
	Stack2 B;
	Stack2 C = 20;

	cout << "A�� 1 �߰� : " << A.push(1) << endl;
	cout << "A�� 1 �߰� : " << A.push(2) << endl;
	cout << "A�� 1 �߰� : " << A.push(3) << endl;
	cout << "A�� 1 �߰� : " << A.push(4) << endl;
	cout << "A�� 1 �߰� : " << A.push(5) << endl;
	cout << "A�� 1 �߰� : " << A.push(6) << endl;
	cout << A << endl;

	cout << "B�� A ����" << endl;
	B = A;
	cout << B << endl;

	C.push(1);
	C.push(2);
	C.push(3);
	C.push(4);
	C.push(5);
	C.push(6);

	Item popped;
	cout << C << endl;
	cout << "C���� pop : " << C.pop(popped) << endl;
	cout << C << endl;
	cout << "C���� pop : " << C.pop(popped) << endl;
	cout << C << endl;
	cout << "C���� pop : " << C.pop(popped) << endl;
	cout << C << endl;
	cout << "C���� pop : " << C.pop(popped) << endl;
	cout << C << endl;
	cout << "C���� pop : " << C.pop(popped) << endl;
	cout << C << endl;
	cout << "C���� pop : " << C.pop(popped) << endl;
	cout << C << endl;
	cout << "C���� pop : " << C.pop(popped) << endl;
	cout << C << endl;
	cout << "C���� pop : " << C.pop(popped) << endl;
	cout << C << endl;


	return 0;
}