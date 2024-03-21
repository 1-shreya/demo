#include<iostream>
using namespace std;

int main()
{
   int a=10;
   int &x=a; //refrence   creates another ref to same location
   cout<<"\nx:"<<&x<<"  a:"<<&a;
   cout<<"\nx:"<<x<<"  a:"<<a;
   a+=10;
   cout<<"\nx:"<<x<<"  a:"<<a;
   x+=100;
   cout<<"\nx:"<<x<<"  a:"<<a;
	
}