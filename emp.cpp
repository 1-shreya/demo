/* write a program create employee class with members employeeid,name and salary 
for 5 employee and calculate total salary and average salary
*/

#include<iostream>
using namespace std;
class employee{
private:
	int empid;
	char name[30];
	float salary;
	

public:
 void get_emp()
 {
 	cout<<"\nemployee id:";
 	cin>>empid;
 	cout<<"\nemployee name:";
 	cin>>name;
 	cout<<"\nemployee  salary:";
 	cin>>salary;
 	//total=total+obj[i].salry;
 }
void set_emp()
{
	cout<<"\nID:"<<empid<<"\nNAME:"<<name<<"\nSALARY:"<<salary;
}
int salry()
{ 
return(salary);
}
};

main()
{
	employee obj[5];
	int i,total=0,avg;
	for(i=0;i<5;i++)
	{
	obj[i].get_emp();
	obj[i].set_emp();
	total=total+obj[i].salry();
	}
	avg=total/5;
	cout<<"\ntotal salary is:"<<total;
	cout<<"\nAverage salary is:"<<avg;
	
}