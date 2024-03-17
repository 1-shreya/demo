/*
multiple inheritance
create class and  define addition in it
class2 define p,ans and ans as protected*/

#include<iostream>
using namespace std;
class first{
	private:
		int a,b;
		protected:
			int c;
		public:
			void set1()
			{
				cout<<"\nEnter first number:";
				cin>>a;
					cout<<"\nEnter second number:";
				cin>>b;
				c=a+b;
				
			}
			void show1()
			{
				cout<<"Addition is :"<<c;
			}
			
	};
	class second{
		
		private:
			int p;
		protected:
			int ans;
			public:
		void set2()
				{
					cout<<"Enter p:";
					cin>>p;
					ans=p+p;
				}
			void show2()
			{
				cout<<"Answer is :"<<ans;
			}
	};
	
	class der:public first,public second
	{
		private :
			int b;
			public:
				void set3()
				{
				
				b=c+ans;
				cout<<"Answer is:"<<b;
				}
};
	
	main()
	{
	der obj;
 	obj.set1();
 	obj.set2();
 	obj.set3();
}