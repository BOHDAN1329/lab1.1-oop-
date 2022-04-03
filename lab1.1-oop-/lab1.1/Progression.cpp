//////////////////////////////////////////////////////////////////////////////
// Progression.cpp 
// פאיכ נואכ³חאצ³¿ – נואכ³חאצ³ÿ לועמה³ג ךכאסף
#include "Progression.h"
#include <iostream>


void Progression::init(int x, int y)
{
	if (x != 0 && y != 0)
	{
		a = x;
		r = y;
	}
	else
	{
		cout << "wrong input" << endl;
	}
};

void Progression::display() const
{
	cout << "a = " << a << endl;
	cout << "r = " << r << endl;
};

void Progression::read()
{
	int x, y;
	cout << "a = ";
	cin >> x;
	cout << "r = ";
	cin >> y;
	init(x, y);
};


void Progression::set_a(unsigned int value)
{
	a = value;
}

void Progression::set_r(unsigned int value)
{
	r = value;
}


double Progression::elementJ(int j)
{
	double b;
	b = a * pow(r, j);
	return b;

}

//////////////////////////////////////////////////////////////////////////////
