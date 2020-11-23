//Program 7: Create an object of a class and access class attributes 
#include <iostream>
#include <conio.h>
using namespace std;
class Oneplus {
public:
	int ram;   
	int storage; 
};
int main() 
{
    Poco X3;       

	X3.ram = 6;
	X3.storage = 256;

	cout << "RAM on the Poco X3 : " <<X3.ram << endl;

	cout << "Storage on the Poco X3 : " <<X3.storage << endl;


	return 0;
}
