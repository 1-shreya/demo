//write a program which create city class and set the temperature inside constructor



#include<iostream>
using namespace std;
class city{
	private:
	int temp;
 public:
 	city(){
 		temp=41;
 		cout<<"Temeprature is:"<<temp;
	 	//cin>>temp;
	 }	
};
main()
	{
	city c1;
	}