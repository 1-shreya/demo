#include<iostream>
#include<string>
using namespace std;
class adder
{
 private:
 //	int sum,a,b,c,d;
//data members
 public:
 
	 adder(int a,int b)
	 {
	 	cout<<"\n1="<<a+b;
	 }
	 adder(int a,int b,int c)
	 {
	 	cout<<"\n2="<<a+b+c;
	 }
	 adder(int a,int b,int c,int d)
	 {
	 	cout<<"\n3="<<a+b+c+d;
	 }
	
	 
};
int main(){
	
	adder (2,3,4);
	adder(3,6);
	adder (2,3,45);
	adder (6,6,8,0);

}