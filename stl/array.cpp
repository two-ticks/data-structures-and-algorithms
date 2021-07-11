#include <bits/stdc++.h>
using namespace std;

array<int, 3> arrA; // -> {0, 0, 0}
// max size of array can be 10^7 outside int main()
// max size of type bool array can be 10^8 outside int main()


int main()
{
    array<int, 3> arrB;             // -> {?, ?, ?}
    array<int, 5> arrC = {1, 5, 6}; //->{1, 5, 6, 0, 0}
    array<int, 5> arrD = {1};       //->{1, 0, 0, 0, 0}
    array<int, 5> arrE = {0};       //->{0, 0, 0, 0, 0}

    arrB.fill(10); //-> {10, 10, 10}

    //cout<<arr.at(index);

    //iterators
    //begin(), end(), rbegin(), rend()

    //rbegin() -> reverse begin()

    //auto : takes data type automatically
    array<int, 5> arr = {1, 3, 4, 6, 5};
    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        cout << *it << " "; // *it = value
    }                       //print 1, 3, 4, 6, 5

    for (auto it = arr.rbegin(); it != arr.rend(); it++) //it++ not it--
    {
        cout << *it << " "; // *it = value
    }                       //print 5, 6, 4, 3, 1

    for (auto it = arr.end() - 1; it >= arr.begin(); it--) //it-- not it++
    {
        cout << *it << " "; // *it = value
    }                       //print 5, 6, 4, 3, 1

    //arr.end() -> points to element after last element
    //arr.rbegin() = arr.end() - 1

    //for each loop
    for (auto it : arr)
    {
        cout << it << " "; // *it = value
    }                      //print 1, 3, 4, 6, 5

    string str = "aditya siddheshwar";
    for (auto c : str)
    {
        cout << c << " ";
    }

    cout << arr.size();
    cout << arr.front();
    cout << arr.back();

    //max size of array can be 10^6 inside int main()
//max size of type bool array can be 10^7 inside int main()
    return 0;
}
