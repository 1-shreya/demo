//write a program scan array and cout total even number using function



#include<iostream>
using namespace std;
main()
{
	int a[5],i,count=1;
	
	for(i=0;i<5;i++)
	{
	cout<<"\nEnter array elements:";
	cin>>a[i];
	}
	
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		{
		//cout<<"Even";
		count++;
		}
		//count++;
   }
	//count++;
	
	cout<<"total even numbers are :"<<count;
	
}