//write program create student class with roll number,name,total for 3 students .Read snd print the information of object

#include<iostream>
using namespace std;
class student{
	private:
	int rollno;
	char name[20];
	float totalmarks;
	public:
		void get()
		{
			cout<<"\nEnter roll number,name and marks of students :";
			cin>>name>>rollno>>totalmarks;
		}
		void show()
		{
			cout<<"\nname:"<<name<<"\nroll no:"<<rollno<<"\ntotal:   "<<totalmarks;
		}
};
main()
{
	
	student st1,st2,st3;

	st1.get();
	st1.show();
	st2.get();
	st2.show();
	st3.get();
	st2.show();
}