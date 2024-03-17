//write a program create employee struct with member variable as empno,empname,esalary


#include<iostream>

struct employee{
	int empno,salary;
	char empname[25];
};

main()
{
	struct employee emp ;
	cout<<"Enter employee number salary and name:";
	cin>>emp.empno>>emp.salary>>emp.empname;
	
}