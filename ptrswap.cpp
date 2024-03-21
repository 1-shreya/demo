#include<iostream>
using namespace std;

int main()
{
   int a,b;
  cout<<"Enter 2 numbers:";
   cin>>a>>b;
   cout<<"\n a= "<<a<<"\tb= "<<b;
   int *p;
   *p=a;
   a=b;
   b=*p;
   
   cout<<"\n a= "<<a<<"\tb= "<<b;
	
}