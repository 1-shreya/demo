//practice
#include<iostream>
using namespace std;
int rn,a[5],i,total;
float per;
string name;
int main()
{
	cout<<"\nEnter name:";
	cin>>name;
	cout<<"\nEnter roll number is:";
	cin>>rn;
	cout<<"Hi "<<name<<"your roll number is "<<rn;
	for(i=0;i<5;i++)
	{
		cout<<"\nEnter your marks:";
		cin>>a[i];
		total+=a[i];
		per=(total*100)/500;
	}
	
	cout<<"Total marks is:"<<total<<endl;
	cout<<"Percentage is:"<<per;
	if(per>=70)
	{
		cout<<"\nYour class is First class";
	}
	else if(per>=60)
	{
		cout<<"\nYour class is Second class";
	}
	else if(per>=50)
	{
		cout<<"Your class is Pass class";
	}
	else{
		cout<<"You are fail..........";
	}
	
	return 0;
}
