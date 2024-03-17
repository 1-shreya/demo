//pointer
#include<iostream>
using namespace std;
class person{
	private:
		int age;
		char name[30];
	public:
		void set1(int age,char name[])
		{
			this->age=age;
			strcpy(this->name,name);
		}
		void show1()
		{
			cout<<"\nAge and name of person is:"<<age<<"\n"<<name;
		}
		
		person comp(person &obj)
		{
		if(age>obj.age)
		{
			return *this;
		}
		else
		{
			return (obj);
		}
		
		}
		
};
main()
{
	person p1,p2,temp;
	p1.set1(23,"aash");
	p2.set1(28,"isha");
	temp.set1(0,"\0");
	p1.show1();
	p2.show1();
	temp=p1.comp(p2);
	cout<<"\nLargest age details:";
	temp.show1();
	

}