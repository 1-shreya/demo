//pointer to object


#include<iostream>
using namespace std;

class shopitem{
	private:
		char name[40];
		int id,price;
		public:
			void set1(int a,int b,char s[])
			{
				id=a;
				price=b;
				strcpy(name,s);
			}
			
			void show1()
			{
				cout<<"\nproduct id:"<<id;
				cout<<"\nprice:"<<price;
				cout<<"\nname:"<<name;
			}
	
};

main()
{
	int size = 3;
	int i;
	shopitem *ptr=new  shopitem [size];
	shopitem*ptrtemp=ptr;
	int a,b;
	char s[40];
	
	for(i=0;i<size;i++)
	{
	cout<<"\n Enter id,price and name:";
	cin>>a>>b>>s;
	ptr->set1(a,b,s);
	ptr++;
	}
	
	for(i=0;i<size;i++)
	{
	cout<<"\nItem no:"<<i+1;
	//cin>>a>>b>>s;
	ptrtemp->show1();
	
	ptrtemp++;
	}
	
	
	
}