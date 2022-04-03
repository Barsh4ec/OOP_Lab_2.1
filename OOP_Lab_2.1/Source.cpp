#include <iostream>
#include <iomanip>
#include "FloatPower.h"
using namespace std;

FloatPower makeFloatPower(double x, double y)
{
    FloatPower a;
    if (!a.Init(x, y))
        cerr << " Wrong arguments to Init(First = 0)" << endl;
    return a;
}

int main()
{
    FloatPower x;
    cout << "Input number ->" << endl;
    cin >> x;
    cout << " result = " << x.Power() << endl;
    cout << x++ << endl;
    cout << x << endl;
    cout << ++x << endl;
    cout << x << endl;

    makeFloatPower(x.GetFirst(), x.GetSecond());

    return 0;
}