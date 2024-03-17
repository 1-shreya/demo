/*
create bankfd class perform operation 
si=p*r*n/100
amount = p+si

create loan class perform interest=loanamount*rate*n/100
amt=loanamount+interest
final=amount+amt
*/

#include<iostream>
using namespace std;
class fixdep{
	
	private:
		int p;
		protected:
			int si,amount,r,n;
			
		public:
			void set1()
			{
				cout<<"\nEnter principal:";
				cin>>p;
				cout<<"\nEnter no of year:";
				cin>>r;
				cout<<"\nEnter rate:";
				cin>>n;
				
			}
			void show1()
			{
				si=p*r*n/100;
				amount=si+p;
				cout<<"simple interest and amount is:"<<si<<amount;
				
			}
};

class loan:public fixdep{
	private:
		int loanamt;
		protected:
			int amt,final,interest;
		public:
			void set2()
			{
				cout<<"\nEnter loan amount:";
				cin>>loanamt;
			/*	cout<<"\nEnter rate:";
				cin>>ra;
				cout<<"\nEnter number of year:";
				cin>>ny;*/
			}
			void show2()
			{
				interest=loanamt*r*n/100;
				final=amount+interest;
				cout<<"simple interest and amount is:"<<interest<<final;
				
			}
};

main()
{
	fixdep obj;
	obj.set1();
	obj.show1();
	loan obj2;
	obj2.set2();
	obj2.show2();
	
}