#include<iostream>
using namespace std;
class A
{
	public:
		void My_A()
		{
			cout<<"My_A method called";
		}
};
int main()
{
   A *p;//pointer of type A
   p->My_A();//if pointer ref to data 
   //one can use -> arrow operator to access members
   
   //*p.My_A();
   cout<<sizeof(p);
   
   
}