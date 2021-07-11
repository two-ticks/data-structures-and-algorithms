#include <bits/stdc++.h>
using namespace std; //std has scope containing standard functions like cout, cin

namespace anotherUniverse
{
    int val = 50;
    int squareVal()
    {
        return val*val;
    }
}

int main()
{
    double val = 10.0;
    cout << val << endl;                       //print 10.0
    cout << anotherUniverse::val << endl;      //print 50 -> using values of scope anotherUniverse
    cout << anotherUniverse::squareVal() << endl; //print 50 -> using values of scope anotherUniverse
    return 0;
}
