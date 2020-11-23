//Program No.4:Check Weather the Number is Even or Odd
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int no;

    cout << "Enter an integer: ";
    cin >> no;

    if ( no % 2 == 0)
        cout << no << " is even.";
    else
        cout << no << " is odd.";

    return 0;
}
