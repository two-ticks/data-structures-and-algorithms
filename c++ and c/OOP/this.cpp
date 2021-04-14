// used to pass current object as a parameter to another method.
// used to refer current class instance variable.
// used to declare indexers.

#include <iostream>
using namespace std;
class Flower
{
public:
    string color;                     //data member (also instance variable)
    string name;                      //data member(also instance variable)
    Flower(string color, string name) //constructor
    {
        this->color = color;
        this->name = name;
        //cout<<"Flower Object Created!"<<endl;
    }
    void display()
    {
        cout << color << "  " << name << endl;
    }
};
int main(void)
{
    Flower rose = Flower("Red", "Rose"); //creating an object
    rose.display();
    return 0;
}