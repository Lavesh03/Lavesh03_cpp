//Program No.5: Find Largest Number Among Three Numbers 

#include <iostream>
#include <conio.h>
using namespace std;

int main() {    
    float no1, no2, no3;

    cout << "Enter three numbers: ";
    cin >> no1 >> no2 >> no3;

    if(no1 >= no2 && no1 >= no3)
        cout << "Largest number: " << no1;

    if(no2 >= no1 && no2 >= no3)
        cout << "Largest number: " << no2;
    
    if(no3 >= no1 && no3 >= no2)
        cout << "Largest number: " << no3;
  
    return 0;
}
