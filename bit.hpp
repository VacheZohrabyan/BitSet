#ifndef BIT_HIDDER
#define BIT_HIDDER

#include <iostream>
#include <limits>
class Bit {
public:
	Bit();
	~Bit();
	Bit(const int );
	Bit(const Bit& );

public:
	void setValue(const int );
	int getValue() const;
	void get_Value_bit() const;

public:
	void set(const int pos);
	void reset(const int pos);
	void flip(const int pos);
	bool test(const int pos);
	bool all() const;
	bool any() const;
	bool none() const;
	int count() const;

private:
	int m_value;
};

#endif 