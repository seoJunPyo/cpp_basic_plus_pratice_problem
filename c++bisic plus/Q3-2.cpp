#include "Q3.h"

static double calc_BMI(double feat, double inch, double weight);

int Q3_2()
{
	double tall_feat, tall_inch, weight;
	cout << "��Ʈ�� ��ġ ������ Ű �Է� : ";
	cin >> tall_feat >> tall_inch;
	cout << "�Ŀ�� ������ ���� �Է� : ";
	cin >> weight;
	cout << "����� BMI�� " << calc_BMI(tall_feat, tall_inch, weight) << "�Դϴ�.";

	return 0;
}

static double calc_BMI(double feat, double inch, double weight)
{
	const int FEAT_PER_INCH = 12;
	const double  INCH_PER_MITER = 0.0254;
	const double KG_PER_LBS = 2.2;

	double tall_m = ((feat * FEAT_PER_INCH) + inch) * INCH_PER_MITER;
	double weight_kg = weight / KG_PER_LBS;

	return  weight_kg / (tall_m * tall_m);
}