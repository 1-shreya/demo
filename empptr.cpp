/*write a program create employee class with member id,name salary
print informatio of employee who got max salary using *this
*/

//pointer
#include<iostream>
using namespace std;
class employee{
	private:
		int id,salary;
		char name[30];
	public:
		void set1(int id,int salary,char name[])
		{
			this->id=id;
			this->salary=salary;
			
			strcpy(this->name,name);
		}
		void show1()
		{
			cout<<"\nId is:"<<id;
			cout<<"\nSalary is:"<<salary;
			cout<<"\nName is:"<<name;
		}
		
		employee comp(employee &obj)
		{
		if(salary>obj.salary)
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
	employee e1,e2,temp;
	e1.set1(1,35000,"aash");
	e2.set1(8,50000,"isha");
	temp.set1(0,0,"\0");
	e1.show1();
	
	cout<<"\n*********************";
	e2.show1();
	temp=e1.comp(e2);
	cout<<"\n*********************";
	cout<<"\nHighest salary details:";
	temp.show1();
	

}