// write a profram scan number and calculate factorial using without return type

#include<iostream>
using namespace std;
void factorial(int x)
{
	int z,fact=1;
	//for(x;x>=1;x++)
	while(x>=1)
	{ 
	fact=fact*x;
	x--;
	//cout<<"\nfactorial of given number is:"<<fact;
	}
	cout<<"\nfactorial of given number is:"<<fact;
	
}
main()
{
	int a;
	cout<<"Enter an element"<<endl;
	cin>>a;
	factorial(a);
}