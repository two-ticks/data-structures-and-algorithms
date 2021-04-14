#include <iostream>  
using namespace std;  
class Flower {  
   public:  
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
    rose.insert("Red", "Rose");       
    rose.display();     
    return 0;  
}  