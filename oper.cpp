#include<iostream>
using namespace std;
class Oper
{
		private:
		int a,b,c;
		public:
		 void Oper (int x,int y,int z)
			{
					a=x;
					b=y;
					c=z;
			}
			
		/*	void show()
			{ 
			cout<<"details"<<a<<b<<c;
			}*/
			void operator-(){
					a=-a;
					b=-b;
					c=-c;
			
			}
			
			void operator +(){
					a=+a;
					b=+b;
					c=+c;
			
			}
			void show()
			{ 
			cout<<"details"<<a<<"b"<<b<<"c"<<c;
			}
			
};
main()
{
	Oper obj;
	//-obj;
	//obj.show();
	obj.Oper(-9,8,9);
	obj.show();
	cout<<"-";
	-obj;
	cout<<"g";
	
		+obj;
	obj.show();
	
	
}