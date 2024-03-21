//pass array of number and key to serach
//if key found in array will return its position
//if not found will return -1
//Example: [11,22,33,44,55] key 44 return 3
//Example: [11,22,33,44,55] key 440 return -1
//output: 44 found at 3
//440 not found
#include<iostream> //header file
using namespace std;


void read(int marks[],int size,int no)
{
	int size_2=sizeof(marks)/sizeof(marks[0]);
	cout<<"\nSize of array:"<<size_2;
	for(int i=0;i<size_2;i++)
	 {
	if(marks[]==no)
	return
	 else 
	 cout<<"not found";
}
	 	cout<<"\n"<<marks[i];
	 }
	 

int main()//start of code
{
	int m[]={99,77,88,66,11}no;
	cout<<"enter number";
	cin>>no;
	cout<<"\ntotal memory:"<<sizeof(m);
	cout<<"\n size of 1:"<<sizeof(m[0]);
	read(m,sizeof(m)/sizeof(m[0][0]),no);
 return 0;
}