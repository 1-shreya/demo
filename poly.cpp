#include<iostream>
using namespace std;


class variable{
	
	private: 
	int a,b,ans;
	float c,d;
	char name[35];
	public:
		
		void add()
		{
			cout<<"\nEnter value for a:";
			cin>>a;
			cout<<"\nEnter value for b:";
			cin>>b;
			ans=a+b;
		}
		int add(int x,int y)
		{
			a=x;
			b=y;
			return(a+b);
		}
		float add(int x)
		{
			a=x;
			b=x;
			return(a*b);
		}
	
};

main()
{
	 variable obj;
	 int ans;
	 //.....................ans=obj.add();
	 cout<<"Addition is :"<<obj.add(8,9);
	 obj.add();
	 //obj.add(56,8);
	 
	 //obj.add();
	cout<<"Addition of entered number is:"<<ans;
	obj.add(8.9,9);
	
	 
	
}