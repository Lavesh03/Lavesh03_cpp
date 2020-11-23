//Program 8: Create class methods 


#include <iostream> 
#include <conio.h> 
using namespace std;  
class classmates {  
   public:  
       int roll_no;      
       string name;      
       void insert(int i, string n)    
        {    
            roll_no= i;    
            name = n;    
        }    
       void display()    
        {    
            cout<<roll_no<<"  "<<name<<endl;    
        }    
};  
int main()
{  
    classmates s1;   
    classmates s2;
    s1.insert(42, "Lavesh");    
    s2.insert(41, "Siddhi");    
    s1.display();    
    s2.display();  
    return 0;  
}  
