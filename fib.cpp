#include<iostream>
using namespace std;

int fibonacci(int n){
	int i,n,fibo=0;
 
		for(i=0;i<=n;i++)
	{
		fibo=n+i;
	}
	cout<<fibo;
	return (n);
}
int main()
{
	int n=0,n1=1,i;
	cout<<"Enter number";
	cin>>n;
	fibonacci(n);
	return 0;

}