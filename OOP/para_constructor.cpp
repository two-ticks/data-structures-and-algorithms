//xonstructor is a special method which is invoked automatically at the time of object creation
//it is used to initialize the data members of new object generally

//constructor with no argument is known as default constructor
//constructor with parameters is called parameterized constructor

#include <iostream>  
using namespace std;  
class Flower {  
   public:
       string color;//data member (also instance variable)      
       string name;//data member(also instance variable) 
        Flower(string c, string n)    //constructor
        {    
            color = c;    
            name = n;     
            cout<<"Flower Object Created!"<<endl;
        }   
       void display()    
        {    
            cout<<color<<"  "<<name<<endl;    
        }    
};  
int main(void) {  
    Flower rose = Flower("Red", "Rose"); //creating an object        
    //rose.display();     
    return 0;  
}  