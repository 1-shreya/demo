//override:it is when child rejectsm parents method to recode its own
//child write its own method rejecting parents method
#include<iostream>
using namespace std;
class shape
{
	public:
		virtual void area()=0;//no code to inherite pure virtual function

};
class rectangle:public shape
{
	public:
		int l,b;
	void set_side(int l,int b)
	{
	this->l=l;
  this->b=b;
	}
	void area()
	{cout<<"\narea of rectangle is"<<l*b;
	}

	

};
class circle:public shape{
	public:
		float r;
	void set_r(float r)
	{
      this->r=r;
	}
	void area()
	{cout<<"\narea of circle is"<<3.14*r*r;
	}

};

int main()
{

	circle c1;
	c1.set_r(4.6);
	c1.area();
	rectangle r1;
	r1.set_side(6,7);
	r1.area();
	
}