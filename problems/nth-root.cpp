/*
find nth root of integer
algo: binary search
*/

#include <iostream>
#include <math.h>

using namespace std;

double powN(double number, int n) // number * number * ... * number (n times)
{
    double ans = 1.0;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * number;
    }
    return ans;
}

double getNthRoot(int n, int m)
{
    double low = 1;
    double high = m;
    double eps = 1e-6; // epsilon: error range
    while ((high - low) > eps)
    {
        double mid = (low + high) / 2.0;
        if (powN(mid, n) < m)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }

    cout << low << " " << high << endl;

    cout << pow(m, (double)(1.0 / (double)n));
}

int main()
{
    int n, m;
    cin >> n >> m;
    getNthRoot(n, m); // nth root of m
    return 0;
}
