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
				b=a+a;
		//	cout<<"\nEnter value for b:";
				cin>>b;
			//b=a+a;
				cout<<"\nadd"<<b;
				
			//cin>>b;
		
			//ans=a+b;
		}
		int add(int x,int y)
		{
			a=x;
			b=y;
			return(a+b);
		}
		float add(float x)
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
	 
	 cout<<"Addition is :"<<obj.add(8,9);
	ans=obj.add(78,27);
	 //obj.add();
	cout<<"\nAddition of entered number is:"<<ans;
	
	//ans=obj.add();
	//obj.add(8.9,9);
	cout<<"\nmultiplication is :"<<obj.add(9.8);
	
	 
	
}