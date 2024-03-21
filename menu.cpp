//day2-practice on billing 
#include<iostream>
using namespace std;
int main()
{
	int choice,total,total1,total2,total3,count2=0,count3=0,count1=0,profit1,profit2,profit3,net_profit,cp;
	
	do{
		cout<<"\nEnter your choice from below";
		cout<<"\n1.Tea ,2.coffee,3.water\n";
		cin>>choice;
		switch(choice){
		
		case 1:
			cout<<"tea";
			count1++;
			break;
			
		case 2:
			cout<<"coffee";
			count2++;	
			break;
			
		case 3:
			cout<<"water";
			count3++;
			break;
				//count++;
		case 0:
			cout<<"thanks for visiting";
			break;
		default:
			cout<<"invalid";
			break;
	}
	
	}
	while(choice!=0);
	total=count1*10+count2*20+count3*80;
	total1=count1*10;
	total2=count2*20;
	total3=count3*80;
	profit1=total1-2*count1;
	profit2=total2-4*count2;
	profit3=total3-3*count3;
	net_profit=profit1+profit2+profit3;
	
	cout<<"\n_________________________________";
	cout<<"\nTea *"<<count1<<"="<<total1;
	cout<<"\ncoffee *"<<count2<<"="<<total2;
	cout<<"\nwater*"<<count3<<"="<<total3;
	cout<<"\n_________________________________";
	cout<<"\ntotal amount is:"<<total;
	cout<<"\n_________________________________";
	cout<<"\nProfit for tea is:"<<profit1;
	cout<<"\nProfit for coffee is:"<<profit2;
	cout<<"\nProfit for water is:"<<profit3;
	cout<<"\n_________________________________";
	
	cout<<"\nNet profit is:"<<net_profit;
	cp=total-net_profit;
	cout<<"\ncost price is:`"<<cp;
	return 0;
}