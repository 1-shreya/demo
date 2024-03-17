/*

class a employee:empno,name,salary
class b bonus :bonus
class c netsal=sal+bonus
*/

#include<iostream>
using namespace std;
class employee{
	
	private:
		int empno;
		char name[30];
		//float salary;
		protected:
			float salary;
			public:
			void set1()
			{
				cout<<"\nEnter employee number:";
				cin>>empno;
				cout<<"\nEnter name:";
				cin>>name;
				cout<<"\nEnter salary:";
				cin>>salary;
				
			}
			void show1()
			{
			//	si=p*r*n/100;
				//amount=si+p;
				cout<<"Employee roll number,name and salary is:"<<empno<<name<<salary;
				
			}
};

class bonus{
	private:
		
		protected:
			int bonus;
		public:
			void set2()
			{
				cout<<"\nEnter bonus amount:";
				cin>>bonus;
				
			}
			void show2()
			{
				//interest=loanamt*ra*ny/100;
				//final=amount+interest;
				cout<<"bonus amount is:"<<bonus;
				
			}
};
class netsal:public employee,public bonus{
	private:
		int netsal;
		public:
		void set3()
		{
			netsal=bonus+salary;
			cout<<"net salary is:"<<netsal;
		}
	
	
};

main()
{
	employee obj;
	obj.set1();
	obj.show1();
	bonus obj2;
	obj2.set2();
	obj2.show2();
	netsal amt;
	amt.set3();
}