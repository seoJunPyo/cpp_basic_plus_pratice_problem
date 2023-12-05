class Cd2
{
private:
	char* performers;
	char* label;
	int selections;
	double playtime;

public:
	Cd2(const char* s1, const char* s2, int n, double x);
	Cd2(const Cd2& d);
	Cd2();
	virtual ~Cd2();
	virtual void  Report() const;
	virtual Cd2& operator=(const Cd2& d);
};


class Classic2 : public Cd2
{
private:
	char* representative;

public:
	Classic2(const char* s1, const char* s2, const char* s3, int n, double x);
	Classic2(const Classic2& c);
	Classic2();
	~Classic2();
	void Report() const;
	Classic2& operator=(const Classic2& c);
};