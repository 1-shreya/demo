/*
write aprogram create emp class  id,name,salary
create obj for 3 employee cerate a pointer object scan and print employee information*/

#include<iostream>
using namespace std;

class emp{
	private:
		int id,salry;
		char name[30];
		public:
			void set1(int x,int y,char s[] )
			{
			id=x;
			salry=y;
			strcpy(name,s);
			}
			void show1()
			{
			cout<<"\nEmployee information :"<<id<<//salary<<name;
				
			}
	
};
main()
{
	int size=3,i;
	int a,b;
	char c[30];
	emp *e1=new emp[size];
	emp*ptr=e1;
	for(i=0;i<size;i++)
	{
	cout<<"Enter employee info:";
	cin>>a>>b>>c;
e1->set1(a,b,c);
e1++;
}

for(i=0;i<size;i++)
	{
	cout<<"Enter employee info:";
e1->show1();
ptr++;
}
	
	
	
}