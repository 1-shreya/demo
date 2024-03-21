#include<iostream>
using namespace std;
int main()
{
	int a=5,b=20;
		cout<<a<<"\n"<<b;
	int*p;
	*p=a;
		a=b;
	b=*p;
	
	cout<<"\n>>>>>>>>>>>>>>>>>>>>>>>>>>";
	cout<<"\n"<<a<<"\n"<<b;
	
	
}