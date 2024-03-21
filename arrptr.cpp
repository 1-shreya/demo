#include<iostream>
using namespace std;

int main()
{
   int a[]={11,22,33,44,55,66};
   int *p=a;
   for(int i=0;i<6;i++)
   	{
	   cout<<*p<<"\n";//cout<<*(p+i)<<"\n";
	   p++;
   }
}
