#include<iostream>
using namespace std;

class base{
	private:
		int a,b;
		protected:
			int c;
			
		public:
			void add()
			{
				cout<<" \nEnter value for a:";
				cin>>a;
				
				cout<<" \nEnter value for b:";
				cin>>b;
				c=a+b;
			}
			void show()
			{
				cout<<"\nvalues are :"<<a<<" \n"<<b<<" \n"<<c;
			}
	
	
};

class sub:public base
{
	private:
		int p,q,ans;
	public:
		void mul()
		{
			cout<<"\nenter values for p and q";
			cin>>p>>q;
			ans=(p*q)+c;
		}
			void show1()
			{
				cout<<"\nans is :"<<ans;
			}
};

main(){
	sub obj;
	obj.add();
	obj.show();
		obj.mul();
		obj.show1();
	
	}
