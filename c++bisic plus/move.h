class Move
{
	double x_;
	double y_;
public :
	Move(double x = 0, double y = 0);
	void showmove() const;
	Move add(const Move& m) const;
	void reset(double x = 0, double y = 0);
};