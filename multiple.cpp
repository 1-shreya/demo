
#include<iostream>
using namespace std;
class A
{
	public:
		void My()
		{
			cout<<"\nA here";
		}
};
class B
{
	public:
		void My()
		{
			cout<<"\nB here";
		}
};
class C:public A,public B
{
	public:
		void My_C()
		{
			cout<<"\nC here";
			
		}
		
		void My()
		{
		
			A::My();
		  B::My();
			
		}
	
};
int main()
{
	C objc;
	objc.My_C();
	objc.My();	
}