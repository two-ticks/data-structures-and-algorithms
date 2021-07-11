#include <bits/stdc++.h>
using namespace std;
//struct creates a data-type
struct node
{
    string str;
    int num;
    double doub;
    char x;

    node(string str_, int num_, double doub_, char x_)
    {
        str = str_;
        num = num_;
        doub = doub_;
        x = x_;
    }
}; //don't forget semi-colon

int main()
{
    node A = node("At", 79, 91.0, 'a');
    cout<< A.str;

    return 0;
}
