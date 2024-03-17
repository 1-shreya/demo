#include<iostream>
using namespace std;
main()
{
	char str[30];
	cout<<"Enter string:";
	cin>>str;
	cout<<str<<endl;
	
	//cin.getline(str[]);
	cin.getline(str,30);
	
	cout<<str;
	
	cout<<"\n*****************";
	cin.getline(str,30);
		cout<<"\n*****************";
	cin.getline(str,30);
	

}