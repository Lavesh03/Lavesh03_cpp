//Program No.3: Swap to number
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b;
	cout<<"\nEnter two numbers : ";
	cin>>a>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"\nAfter swapping numbers are : ";
	cout<<"\n First Number is "<<a;
    cout<<"\n Second Number is "<<b;
	
	return 0;
}
