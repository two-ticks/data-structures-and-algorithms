//xonstructor is a special method which is invoked automatically at the time of object creation
//it is used to initialize the data members of new object generally

//constructor with no argument is known as default constructor
//constructor with parameters is called parameterized constructor

#include <iostream>  
using namespace std;  
class Flower {  
   public:
        Flower() //constructor
        {
            cout<<"Flower Object Created!"<<endl;
        }  
       string color;//data member (also instance variable)      
       string name;//data member(also instance variable)      
       void insert(string c, string n)    
        {    
            color = c;    
            name = n;    
        }    
       void display()    
        {    
            cout<<color<<"  "<<name<<endl;    
        }    
};  
int main(void) {  
    Flower rose; //creating an object  
    //rose.insert("Red", "Rose");       
    //rose.display();     
    return 0;  
}  