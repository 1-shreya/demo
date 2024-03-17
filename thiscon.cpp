#include<iostream>
using namespace std;
class test{
	private:
		int a,b,c;
		public:
			test(int a,int b){
			
			this->a=a;
			this->b=b;
			}
			void set1(int c)
			{
			
			this->c=c;
			}
			void show1()
			{
				cout<<"\nvalue of a,b and c:"<<a<<"\n"<<b<<"\n"<<c;
			}
};
main()
{
	test t1(78,56),t2(5,55);
	t1.set1(43);
	t1.show1();
	cout<<"\n**********************";
	
	t2.set1(56);
	t2.show1();
}