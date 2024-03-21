#include<iostream>
using namespace std;
int main()
{
int n;
	
	do{
		cout<<"Enter number:";
		cin>>n;
		if(n%5==0 && n%3==0)
		{
			cout<<"number is divisible by 5 and 3";
		}
		
	}while(true);
	return 0;
}