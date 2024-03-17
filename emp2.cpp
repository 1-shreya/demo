/* write a program create employee class with members employeeid,name and salary 
for 5 employee and calculate total salary and average salary
*/

#include<iostream>
using namespace std;
class employee{
private:
	int empid,max;
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
int maximum()
{
	return(max);
	//cout<<"salary is max"<<max;
}

};

main()
{
	employee obj[2];
	int i,total=0,avg,max=0;

	for(i=0;i<2;i++)
	{
	obj[i].get_emp();
	obj[i].set_emp();
	total=total+obj[i].salry();
	if(obj[i].salry()>max)
	{
	//cout<<"salry is max"<<max;
	max=obj[i].salry();
	//cout<<"salry is max"<<max;
	}
	avg=total/2;
}
	cout<<"\ntotal salary is:"<<total;
	cout<<"\nAverage salary is:"<<avg;
	//	cout<<"\nAverage salary is:"<<maximum;
	cout<<"\nMaximum salary is :"<<max;
	cout<<"\nEmployee details:";
	 for(i=0;i<2;i++)
	 {
	 if(max==obj[i].salry())
	 {
	 	obj[i].set_emp();	
		 
	 }
	 }
	

}