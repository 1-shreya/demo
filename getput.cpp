#include<iostream>
using namespace std;

main()
{
	
	char ch;
	int count=0;
	cout<<"Enter character:";
	cin>>ch;
//	cin.get(ch);
	while(ch!='\n')
	{ 
	cin.get(ch);

	//cout<<ch;
	count++;
	}
//	cin.put(ch);
	cout<<"Total count is:"<<count;
	

}