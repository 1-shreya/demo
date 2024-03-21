#include<iostream>
using namespace std;

int main()
{
   int a=10;
   int *p;//pointer of type int created
  //ref to som garbage
   p=&a;
   cout<<"\n"<<p;//ref to som garbage
   cout<<"\na's address is: "<<&a;
   cout<<"\np ref to address : "<<p;
   cout<<"\n p ref to data :"<<*p;
   a=a+10;
   cout<<"\n p ref to data :"<<*p;
   *p=*p+100;
   cout<<"\na is: "<<a;
	
}