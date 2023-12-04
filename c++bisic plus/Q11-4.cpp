#include "Q11.h"


int Q11_4()
{
	Time aida(3, 35);
	Time tosca(2, 48);
	Time temp;

	cout << "Aida¿Í Tosca" << endl;
	cout << aida << "; " << tosca << endl;
	temp = aida + tosca;
	cout << "Aida + tosca : " << temp << endl;
	temp = aida * 1.17;
	cout << "aida * 1.17 : " << temp << endl;
	cout << "10 * tosca : " << 10 * tosca << endl;

	return 0;
}