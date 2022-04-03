#pragma once

using namespace std;

class FloatPower
{
private:
    double first, second;
public:
    double GetFirst() { return first; }
    double GetSecond() { return second; }
    void SetFirst(double value) { first = value; }
    void SetSecond(double value) { second = value; }

    FloatPower();
    FloatPower(double, double);
    FloatPower(const FloatPower&);

    operator string() const;

    friend ostream& operator << (ostream&, const FloatPower&);
    friend istream& operator >> (istream&, FloatPower&);

    bool Init(double x, double y);
    double Power();

    FloatPower& operator ++();
    FloatPower& operator --();
    FloatPower operator ++(int);
    FloatPower operator --(int);
};