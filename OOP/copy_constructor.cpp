//shallow copy : both the objects point to the same memory location
//deep copy : both the source and copy have distinct memory locations
#include <iostream>
using namespace std;
class A{
public:
    int x;
    A(int a) {  // parameterized constructor.
        x = a;
    }
    A(A &i){     // copy constructor
    
        x = i.x;
    }
};
int main(){
    A a1(20); // Calling the parameterized constructor.
    A a2(a1); //  Calling the copy constructor.
    cout << a2.x;
    return 0;
}