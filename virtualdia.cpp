//virtual diamond class



#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"\nA here";
		}
};
class B:virtual public A
{
	public:
		B()
		{
			cout<<"\nB here";
		}
};
class C:public virtual A
{
	public:
		C()
		{
			cout<<"\nC here";
			
		}
	
};
class X:public B ,public C
{
	public:
		X()
		{
			cout<<"\nX here";
			
		}
	
};
int main()
{
	X objx;
	
	
};
