//we don't need to create instance for accessing the static members, so it saves memory
#include <iostream>  
using namespace std;  
class Flower {  
   public:  
       string color; //data member (also instance variable)      
       string name;  //data member(also instance variable) 
       static string planet;
       static int count;     
       void insert(string color, string name)    
        {    
            this->color = color;    
            this->name = name;    
            count++;    
        }    
       void display()    
        {    
            cout<<color<<"  "<<name<<"  "<<planet<<endl;    
        }    
};  

string Flower::planet = "Earth";
int Flower::count = 0;

int main(void) {  
    Flower rose; //creating an object
    Flower sunflower;   
    rose.insert("Red", "Rose");   
    sunflower.insert("Yellow with Brown","Sunflower");    
    rose.display();
    sunflower.display();
    cout<<"Number of Flowers:"<<Flower::count;     
    return 0;  
}  