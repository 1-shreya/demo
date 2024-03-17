#include<iostream>
using namespace std;
struct book{
	int no;
};
main()
{
	struct book *b1,b;
	b1=&b;
	cout<<"Enter number:";
//	(*b1).no=5;
	cin>>(*b1).no;
	cout<<"\n"<<(*b1).no;
	
}