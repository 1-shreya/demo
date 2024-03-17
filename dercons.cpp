/* constructor in derived*/

#include<iostream>
using namespace std;
class base{
private:
	int a;
public:
	
	base()
	{
		a=5;
	}
	
	void set1()
	{
		cout<<"\nvalue of a:"<<a;
	}
};

class der:public base{
private:
	int y;
public:
	
	der()
	{
		y=555;
	}
	void set2()
	{
		base::set1();
		cout<<"\nvalue of y:"<<y;
	}
};

main(){
	der obj;
	obj.set2();
}

