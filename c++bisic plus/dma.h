#include <iostream>

class DMA
{
private :
	char* label;
	int rating;

public : 
	DMA(const char* l = "null", int r = 0);
	DMA(const DMA& rs);
	virtual ~DMA();
	virtual DMA& operator=(const DMA& rs);
	virtual void Veiw() const;

	friend std::ostream& operator<<(std::ostream& os, const DMA& rs);
};

class baseDMA : public DMA
{

public:
	baseDMA(const char* l = "null", int r = 0) : DMA(l, r) {};
	baseDMA(const baseDMA& rs) : DMA(rs) {};
	baseDMA& operator=(const baseDMA& rs);
	void Veiw() const;

	friend std::ostream& operator<<(std::ostream& os, const baseDMA& rs);
};

class lacksDMA : public DMA
{
private :
	enum { COL_LEN = 40 };
	char color[COL_LEN];

public : 
	lacksDMA(const char* c = "blank", const char* l = "null", int r = 0);
	lacksDMA(const char* c, const DMA& rs);
	lacksDMA(const lacksDMA& rs);
	void Veiw() const;

	lacksDMA& operator=(const lacksDMA& rs);
	friend std::ostream& operator<<(std::ostream& os, const lacksDMA& rs);
};

class hasDMA : public DMA
{
private: 
	char* style;
public :
	hasDMA(const char* s = "none", const char* l = "null", int r = 0);
	hasDMA(const char* s, const DMA& rs);
	hasDMA(const hasDMA& rs);
	~hasDMA();
	void Veiw() const;

	hasDMA& operator=(const hasDMA& rs);
	friend std::ostream& operator<<(std::ostream& os, const hasDMA& rs);
};