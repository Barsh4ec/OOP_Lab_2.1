#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <sstream>
#include "FloatPower.h"
using namespace std;

bool FloatPower::Init(double x, double y)
{
    second = y;
    if (x != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

FloatPower::FloatPower()
{
    first = 0;
    second = 0;
}
FloatPower::FloatPower(double r = 0, double i = 0)
{
    first = r;
    second = i;
}
FloatPower::FloatPower(const FloatPower& r)
{
    first = r.first;
    second = r.second;
}

FloatPower::operator string () const
{
    stringstream ss;
    ss << " first = " << first << endl;
    ss << " second = " << second << endl;
    return ss.str();
}


ostream& operator << (ostream& out, const FloatPower& r)
{
    out << string(r);
    return out;
}
istream& operator >> (istream& in, FloatPower& r)
{
    cout << " first = "; in >> r.first;
    cout << " second = "; in >> r.second;
    cout << endl;
    return in;
}

double FloatPower::Power()
{
    double result;
    result = pow(first, second);
    return result;
}

FloatPower& FloatPower::operator ++()
{
    first++;
    return *this;
}
FloatPower& FloatPower::operator --()
{
    first--;
    return *this;
}
FloatPower FloatPower::operator ++(int)
{
    FloatPower t(*this);
    second++;
    return t;
}
FloatPower FloatPower::operator --(int)
{
    FloatPower t(*this);
    second--;
    return t;
}

