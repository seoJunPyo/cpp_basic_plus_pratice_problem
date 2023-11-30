class Sales
{
	static const int QUARTERS = 4;
	double sales_[QUARTERS];
	double average_;
	double max_;
	double min_;
	void copy_arr(double copy[], const double source[]);
	double average(double arr[]);
	double min(double arr[]);
	double max(double arr[]);

public:
	Sales(){ sales_[0] = 0; average_ = 0; max_ = 0; min_ = 0; };
	Sales(const double arr[]);
	void setSales(const double ar[]);
	void setSales();
	void showSales() const;
};