//home work bill amount

#include<iostream>
using namespace std;
int main()
{
	float bill_amt,discount,pay;
	cout<<"Enter bill amount:";
	cin>>bill_amt;
		
	if(bill_amt>11000)
	{
	discount=bill_amt*10/100;
		cout<<"\n 10 discount of:"<<discount;
		pay=bill_amt-discount;
		cout<<"\nyou have topay"<<pay;
	}
	else if(9999>bill_amt || bill_amt<5000)
	{
	discount=bill_amt*5/100;
	
		cout<<"\n 5 ndiscount of:"<<discount;
		pay=bill_amt-discount;
		cout<<"\nyou have to pay"<<pay;
	}
	else if(4999>bill_amt || bill_amt<2000)
	{
	discount=bill_amt*2/100;
	
		cout<<"\n2 discount of:"<<discount;
		pay=bill_amt-discount;
		cout<<"\nyou have to pay"<<pay;
	}
	else
	cout<<"No discount available";
	
	return 0;
}