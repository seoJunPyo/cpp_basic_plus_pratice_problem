const int Len = 40;

struct golf
{
	char full_name[Len];
	int handicap;
};

void setgolf(golf& g, const char* nama, int hc);
void setgolf(golf& g);
void handicap(golf& g, int hc);
void showgolf(const golf& g);
