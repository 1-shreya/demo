//parameterized constructor with multilevel inheritance 

#include<iostream>
using namespace std;
class A
{
	public:
		A(int no1)
		{
			cout<<"\nConstructor:A here"<<no1;
		}
};
class B:public A
{
	public:
		B(int no1,int no2):A(no1)
		{
			cout<<"\nConstructor:B here"<<no2;
		}
};
class C:public B
{
	public:
		C(int no1,int no2,int no3):B(no1,no2)
		{
			cout<<"\nConstructor:C here"<<no3;
		}
};
int main()
{
	C objc(10,50,20);
}