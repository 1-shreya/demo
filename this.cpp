#include<iostream>
using namespace std;
class test{
	private:
		int a,b,c;
		public:
			void set1(int a,int b,int c)
			{
			this->a=a;
			this->b=b;
			this->c=c;
			}
			void show1()
			{
				cout<<"\nvalue of a,b and c:"<<a<<"\n"<<b<<"\n"<<c;
			}
};
main()
{
	test t1,t2;
	t1.set1(23,87,43);
	t1.show1();
		cout<<"\n**********************";
		t2.set1(1,2,3);
		t2.show1();
}