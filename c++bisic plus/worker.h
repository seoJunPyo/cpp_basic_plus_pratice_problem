#include <string>

class Worker
{
private :
	std::string full_name;
	long id;
protected :
	virtual void Data() const;
	virtual void Get();
public : 
	Worker() : full_name("no name"), id(0L) {};
	Worker(const std::string& str, long n) 
		: full_name(str), id(n) {};
	virtual void Set() = 0;
	virtual void Show() const = 0;
};

class Waiter : virtual public Worker
{
private :
	int panache;
protected :
	void Data() const;
	void Get();
public :
	Waiter() : Worker(), panache(0) {};
	Waiter(const std::string& str, long n, int p = 0) 
		: Worker(str, n), panache(n) {};
	Waiter(const Worker& wk, int p = 0)
		: Worker(wk), panache(p) {};
	void Set();
	void Show() const;
};

class Singer : virtual public Worker
{
protected:
	enum { other, alto, contralto, soprano, bass, baritone, tenor };
	enum { Vtype = 7 };
	void Data() const;
	void Get();
private:
	static const char* pv[Vtype];
	int voice;
public:
	Singer() : Worker(), voice(0) {};
	Singer(const std::string& str, long n, int p = 0)
		: Worker(str, n), voice(n) {};
	Singer(const Worker& wk, int p = 0)
		: Worker(wk), voice(p) {};
	void Set();
	void Show() const;
};

class SingingWaiter : public Singer, public Waiter
{
protected :
	void Data() const;
	void Get();
public :
	SingingWaiter() {};
	SingingWaiter(const std::string& str, long n, int p = 0, int v = 0)
		: Worker(str, n), Waiter(str, n, p), Singer(str, n, v) {};
	SingingWaiter(const Worker& wk, int p = 0, int v = 0)
		: Worker(wk), Waiter(wk, p), Singer(wk, v) {};
	SingingWaiter(const Waiter& wt, int v = 0)
		: Worker(wt), Waiter(wt), Singer(wt, v) {};
	SingingWaiter(const Singer& wt, int p = 0)
		: Worker(wt), Waiter(wt, p), Singer(wt) {};

	void Set();
	void Show() const;
};