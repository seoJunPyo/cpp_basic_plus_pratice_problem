class Cd
{
private : 
	char performers[50];
	char label[20];
	int selections;
	double playtime;

public : 
	Cd(const char* s1, const char* s2, int n, double x);
	Cd(const Cd& d);
	Cd();
	virtual ~Cd();
	virtual void  Report() const;
	virtual Cd& operator=(const Cd& d);
};


class Classic : public Cd
{
private :
	char representative[50];

public :
	Classic(const char* s1, const char* s2, const char* s3, int n, double x);
	Classic(const Classic& c);
	Classic();
	~Classic();
	void Report() const;
	Classic& operator=(const Classic& c);
};