class Plorg
{
	static const int LEN = 20;
	char name[LEN];
	int CI;

public :
	Plorg(const char* str = "Plorga", int ci = 50);
	void setCI(int new_CI);
	void show();
};
