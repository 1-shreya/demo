//friend function with operator overloading 
#include<iostream>
using namespace std;
//class Inches;//forward declaration
class complex
{
	private:
		int  real,comp;
	
	public:
		void set_f(int real,int comp)
		{
			this->real=real;
			this->comp=comp;
		}
		void display()
{
	cout<<"\n"<<real<<","<<comp;
}
	

	friend complex operator+(complex &objn,complex &objm);
};




	complex operator+(complex &objn,complex &objm)
		{
		 //print total in inches only
		 //feet--->inches+inches=totAL
		 complex objt;
		  objt.real=objn.real+objm.real;
		  objt.comp=objn.comp+objm.comp;
		  return(objt);
		  
		}

int main()
{
	complex no1,no2,no3;
	no1.set_f(12,3);
	no1.display();
	no2.set_f(4,7);
	no2.display();
	cout<<" \naddition of above numbers is:";
	no3=no1+no2;
no3.display();
	
	
//	objn;

}