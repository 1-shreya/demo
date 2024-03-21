//area of circle with function
#include<iostream>
#include<string>
using namespace std;
class circle
{
	
	private:
		float radi,r;
		public:
			void radius(float r)
			{
				radi=r;
				cout<<"Raadius is:"<<radi;
			}
			
			void display()
			{
			cout<<"\narea is"<<3.14*radi*radi;	
			}
};

int main()
{
	circle c;
	float r,radius;
	cout<<"Enter radius:";
	cin>>r;
	c.radius(r);
	c.display();
	
}