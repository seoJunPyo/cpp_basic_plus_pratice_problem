#include "Q3.h"

static double calc_BMI(double feat, double inch, double weight);

int Q3_2()
{
	double tall_feat, tall_inch, weight;
	cout << "피트와 인치 단위로 키 입력 : ";
	cin >> tall_feat >> tall_inch;
	cout << "파운드 단위로 무게 입력 : ";
	cin >> weight;
	cout << "당신의 BMI는 " << calc_BMI(tall_feat, tall_inch, weight) << "입니다.";

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