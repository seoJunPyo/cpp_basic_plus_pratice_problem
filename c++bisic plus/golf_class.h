class Golf
{
	static const int LEN = 40;
	char full_name_[LEN];
	int handicap_;

public:
	Golf() { full_name_[0] = '\0';  handicap_ = 0; };
	Golf(char* full_name, int handicap);
	void setgolf(const char* name, int hc);
	void setgolf();
	void handicap(int hc);
	void showgolf() const;
};