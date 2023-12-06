#include <string>
using namespace std;

class Person_Base
{
private :
	string first_name;
	string last_name;
public :
	Person_Base(const char* fn = "no", const char* ln = "ne")
		: first_name(fn), last_name(ln) {};
	virtual void Show() const = 0;
	virtual void Set() = 0;

};

class Gunslinger : virtual public Person_Base
{
private : 
	double draw_time;
	int notch_count;
protected :
	void Data() const;
	void Get();
public :
	Gunslinger(const char* fn = "no", const char* ln = "ne", double x = 0, int n = 0) 
		: Person_Base(fn, ln), draw_time(x), notch_count(n) {};
	double Draw() const;
	virtual void Show() const;
	virtual void Set();
};

class PokerPlayer : virtual public Person_Base
{
public :
	PokerPlayer(const char* fn = "no", const char* ln = "ne")
		: Person_Base(fn, ln) {};
	int Draw() const;
	virtual void Show() const { Person_Base::Show(); };
	virtual void Set() { Person_Base::Set(); };
};

class BadDude : virtual public Gunslinger, virtual public PokerPlayer
{
public :
	BadDude(const char* fn = "no", const char* ln = "ne", double x = 0, int n = 0)
		: Gunslinger(fn, ln, x, n), PokerPlayer(fn, ln) {};
	double GDraw() const;
	int CDraw() const;
	void Show() const;
	void Set() { Gunslinger::Set(); };
};

