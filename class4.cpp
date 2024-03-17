/*write a program create fixed deposit*/

#include<iostream>
using namespace std;
class fixdep{
	private:
	int no,yr,rate,amount,p,si;
	char name[20];
	//float si;
	public:
	void get_pr()
	{
		cout<<"\nEnter customer number,name,number of year ,principal and rate  :";
		cin>>no>>name>>yr>>p>>rate;
		si=p*rate*yr/100;
		amount=p+si;
	}
void show_pr()
	{
		cout<<"\n customernumber:"<<no<<"\n number of year:"<<yr<<"\n customer name:"<<name<<"\nrate of interest:"<<rate<<"\nsimple interest:"<<si<<"\namount:"<<amount<<"\nprincipal"<<p;
	}
	
};
	main()
	{
		fixdep c1,c2;
		c1.get_pr();
		c1.show_pr();
		c2.get_pr();
		c2.show_pr();
	}