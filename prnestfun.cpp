#include<iostream>
using namespace std;

float per(int total){

return (((float)total*100)/500);
}
int read(int a[i])

int main()
{
	int a[5],i,total=0;
	for(i=1;i<=5;i++)
	{
		cout<<"\nEneter marks:";
		cin>>a[i];
	//	cin>>a[i];
	total=total+a[i];
	}
cout<<"total is"<<total;
cout<<"percentage is"<<per(total);
	return 0;
}