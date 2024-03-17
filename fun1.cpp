//program using function

#include<iostream>
using namespace std;

void addition(int x,int y)
{
	int z;
	z=x+y;
	cout<<"Addition of a and b is :"<<z;
}
main()
{
	int a,b;
	cout<<"Enter value for a:\n";
	cin>>a;
	cout<<"Enter value for b:\n";
	cin>>b;
	
	addition(a,b);
}