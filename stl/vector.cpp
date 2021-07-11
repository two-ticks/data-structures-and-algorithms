#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr; // -> {}
    arr.push_back(0);
    arr.push_back(5);
    arr.pop_back();
    arr.clear(); //erase all element at once
    //segmentation fault if you push_back 10^7 times

    vector<int> vec1(4, 0);                     // size = 4, value = 0  -> {0, 0, 0, 0}
    vector<int> vec2(4, 10);                    // size = 4, value = 0  -> {10, 10, 10, 10}
    vector<int> vec3(vec2.begin(), vec2.end()); // -> [)
    vector<int> vec4(vec2);

    vector<int> vec5;
    vec5.push_back(1);
    vec5.push_back(3);
    vec5.push_back(2);
    vec5.push_back(17);
    vec5.emplace_back(6); //emplace_back takes lesser time than push_back

    vector<int> vec6(vec5.begin(), vec5.begin() + 2); // -> {1,3}

    swap(vec1, vec2);

    //2D vectors

    vector<vector<int>> vec;

    vector<int> vecA;
    vecA.push_back(1);
    vecA.push_back(2);
    vecA.push_back(2);

    vector<int> vecB;
    vecA.push_back(10);
    vecA.push_back(20);
    vecA.push_back(30);

    vec.push_back(vecA);
    vec.push_back(vecB);
    for (auto vect : vec) // vect is vector itself
    {
        for (auto it : vect)
        {
            cout << it << " ";
        }
        cout << endl;
    }

    vector<vector<int>> vect{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    cout << vect[1][1] << endl;
    //define 10x20
    vector<vector<int>> vectA(10, vector<int>(20, 0));

    //3D vector
    vector<vector<vector<int>>> vectr(10, vector<vector<int>>(10, vector<int>(20, 0)));

    return 0;
}
