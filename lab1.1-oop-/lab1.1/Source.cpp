//////////////////////////////////////////////////////////////////////////////
// Source.cpp 
// ???????? ???? ??????? ? ??????? main
#include <iostream>
#include "Progression.h"

using namespace std;

Progression makeProgression(double a, double r)
{
    Progression res;
    res.init(a, r);
    return res;

}

int main()
{
    Progression p1, p2, p3,p4; 

    cout << "Progression1" << endl;
    p1.read();
    cout << "(a) with index (j) equals " << p1.elementJ(5) << endl;

    cout << "Progression2" << endl;
    p2.set_a(2);
    p2.set_r(3);
    p2.display();
    cout << "(a) with index (j) equals " << p2.elementJ(2) << endl;

    cout << "Progression3" << endl;
    p3.init(7, 2);
    cout << "a = " << p3.get_a() << endl;
    cout << "r = " << p3.get_r() << endl;
    cout << "(a) with index (j) equals " << p3.elementJ(3) << endl;

    cout << "Progression4" << endl;
    p4 = makeProgression(5, 1);
    p4.display();
    cout << "(a) with index (j) equals " << p4.elementJ(2) << endl;
}

