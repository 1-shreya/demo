#include<iostream>
using namespace std;
class Inches;//forward declaration
class Feet
{
	private:
		int  f;
	public:
		void set_f(int f)
		{
			this->f=f;
		}
		friend void adder(Inches &obji,Feet &objf);
};
class Inches
{
	private:
		int  i;
	public:
		void set_i(int i)
		{
			this->i=i;
		}
			friend void adder(Inches &obji,Feet &objf);
};

void adder(Inches &obji, Feet &objf)
		{
		 //print total in inches only
		 //feet--->inches+inches=totAL
		  cout<<"\nin feet"<<obji.i+objf.f*12;
		}


int main()
{
	Inches obji;
	Feet objf;
	obji.set_i(123);
	objf.set_f(27);
	adder(obji,objf);

}