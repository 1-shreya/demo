//create employee struct withmembers as empno,empname,empsalary for  2 employee and print information about amployee who got highest salary
#include<iostream>

using namespace std;
struct emp{
	int empno,salary;
	char empname[40];
	
};
main(){
	struct emp emp1,emp2;
	cout<<"Enter employee 1 number ,salary and name:";
	cin>>emp1.empno>>emp1.salary>>emp1.empname;
	
	cout<<"\nEnter employee  2 number ,salary and name:";
	cin>>emp2.empno>>emp2.salary>>emp2.empname;
	
	if(emp1.salary>emp2.salary){
		cout<<"salary is more";
		
	}
	else{
		cout<<"salary is more";
	}
	
}