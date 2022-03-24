#pragma once
#include <iostream>

using namespace std;
class Progression
{
private:
	double  a,r;
public:
	int get_a() const { return a; };
	int get_r() const { return r; };
	void set_a(unsigned int value);
	void set_r(unsigned int value);

	void init(int x, int y);
	void display() const;
	void read();

	double  elementJ(int j);
};

