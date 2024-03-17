//swap two numbers

#include<iostream>
using namespace std;

main()
{
	int a,b,temp=0;
	cout<<"Enter value for a:";
	cin>>a;
	cout<<"Enter value for b:";
	cin>>b;
	temp=a;
	a=b;
	b=temp;
	//a=b;
	//temp=b;
	cout<<"After swapping numbers"<<a<<" "<<b;
}