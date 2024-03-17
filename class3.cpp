/*write  a program create product class take value from user as product id,name of product and quantity of product
calculate amount,discout,calculate net amount and print bill for customer*/

#include<iostream>
using namespace std;
class product{
	private:
	int id,quantity;
	char name[20];
	float rate,dis,net,amt;
	public:
	void get_pr()
	{
		cout<<"\nEnter product id,product quantity,product name and rate  :";
		cin>>id>>quantity>>name>>rate;
		amt=rate*quantity;
		dis=amt*10/100;
		net=amt-dis;
	}
	void show_pr()
	{
		cout<<"\nid:"<<id<<"\nquantity:"<<quantity<<"\nname:"<<name<<"\nrate:"<<rate<<"\namt:"<<amt<<"\ndis:"<<dis;
	}
	
};
	main()
	{
		product c1,c2;
		c1.get_pr();
		c1.show_pr();
		c2.get_pr();
		c2.show_pr();
	}