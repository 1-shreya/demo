
//ambiguity:when both parents are haveing same method c++ can not 
//decide from whom to take in this case we need ambuguity resolution
//write method() in method super_class::method() to use
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
		My_C()
		{
			cout<<"\nC here";
			
		}
		void My()
		{
		  A::My();	
		  B::My();//here we are choosing whom to take method from 
		  
		  //if coded then override :cout<<"C here hawa yeude";
		}
};
int main()
{
	C objc;
	objc.My_C();
	objc.My();
	
	
};