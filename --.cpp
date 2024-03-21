#include<iostream>
using namespace std;
class X
{
	private:
		int datax;
	public:
		X()
		{
			datax=101;
		}
		void display_X()
		{
			cout<<"\nData from internal function data:"<<datax;
		}
		friend void inside_job(X &obj);
};

void inside_job(X &obj)
		{
			cout<<"\nAccessed from outsider a friend function:"<<obj.datax;
		}


int main()
{
	X objx;
	objx.display_X();
    inside_job();
	
}