//write a program create a class employee with member variable empno,name,salary for 3 obj calculate total salary and average salary

#include<iostream>
using namespace std;
class employee{
	private:
	int empno,salary;
	char name[15];
	public:	
	
	void get()
	{
		cout<<"Enter empno,name and salary of Employee :";
		cin>>empno>>name>>salary;
	}
	void show()
	{
			cout<<" \nempno"<<empno<<"\nname "<<name<<"\nsalary "<<salary;
			
		}
	int totalsalry()
	{ 
	//total=emp1.salary+emp2.salary+emp3.salary;
		return(salary);
	}
};
main()
{
	employee em1,em2,em3;
	int total;
	float avg;
	em1.get();
	//em1.show();
	em2.get();
	//em2.show();
	em3.get();
	//em3.show();
	
	total=em1.totalsalry()+em2.totalsalry()+em3.totalsalry();
	avg=total/3;
	
	cout<<"\nTotal salary is"<<total;
	cout<<"\ntotal average salary is"<<avg;
	
	
	
}