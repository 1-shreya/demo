//gcd algo
#include<iostream>
using namespace std;

int gcd(int no1,int no2)
{
	if(no1%no2==0)
	{
	return no2;
		
	}
	else{
		return gcd(no2,no1%no2);
	}
}
int main()
{
	int n1,n2;
	cout<<"Enter two numbers";
	cin>>n1>>n2;
	if(n1<n2){
			cout<<gcd(n2,n1);
	}

	else
	cout<<gcd(n1,n2);
	return 0;
}