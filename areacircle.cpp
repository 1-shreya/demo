//area of circle with function
#include<iostream>
#include<string>
using namespace std;
class calculator
{
	
	private:
		int ad,mi,mu,di,no1,no2;
		public:
			void add(int n1,int n2)
			{
			no1=n1;
			no2=n2;	
			ad=no1+no2;
			}
			void sub(int n1,int n2)
			{
			no1=n1;
			no2=n2;	
			mi=no1-no2;	
			}
			void mul(int n1,int n2)
			{
				no1=n1;
			no2=n2;	
			mu=no1*no2;
				
			}
			void div(int n1,int n2)
			{
			no1=n1;
			no2=n2;	
			di=no1/no2;	
			}
			
		//	void display()
			//{
				
		//	}
};

int main()
{
	calculator c;
	int n1,n2;
	cout<<"Enter 2 numbers:";
	cin>>n1>>n2;
	/*c.add(n1,n2);
		c.sub(n1,n2);
			c.mul(n1,n2);
				c.div(n1,n2);*/
				
					int ch;
				cout<<"1.add,2.sub,3.mul,4.div";
				cin>>ch;
				switch(ch)
				 	case 1:
				 		c.add(n1,n2);
				 		break;
				 	case 2:
				 	c.sub(n1,n2);
				 		break;
				 	case 3:
				 		c.mul(n1,n2);
				 		break;
				 	case 4:
				  		c.div(n1,n2);
					
				 		break;
//	c.display();
	/*cout<<"addition is"<<ad;
				cout<<"substreaction is"<<mi;
					cout<<"multiplication is"<<mu;
						cout<<"division is"<<di;*/
	
}