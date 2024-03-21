// //CREATE CLASS STUDENT
//HAS CONSTRUCTOR THAT READS NAME GENDER AND AUTO GENERATES ROLLNO
//HAS DISPLAY() THAT PRINTS ROLLNO-NAME-GENDER
//phase 2:
//convert to array of object for 10 students
//phase 3:
//menudriven to register(add),search a student on rollno,print list
//phase 4
//add option to edit already available record
// search a roll no if found then ask 1 change name 2 change gender and change

#include<iostream>
#include<string>
using namespace std;
class student
{
 private:
 	int rn;
	string name,gender;
 public:
 	int static rn_g;
	student(string name,string gender){
 	
 	this->name=name;
 	this->gender=gender;
 	//int rn_g++;
 	rn=rn_g++;
 	}
  void display()
 {
 	cout<<"\nroll number="<<rn<<"\nname="<<name<<"\ngender="<<gender;
 }
int get_rollno()
{
	return rn;
} 
  void change()
 {
 	int ch;
 	cout<<"Eneter choice";
 	cin>>ch;
 	if(ch==1)
 	{
 		cout<<"\nOld Name:"<<name;
					cout<<"\nNew:";
					cin>>name;
					display();
	 }
	 else if(ch==2)
	 {
	 	cout<<"\nOld Gender:"<<gender;
					cout<<"\nNew:";
					cin>>gender;
					display();
	 }
	 else{
	 	cout<<"Not found";
	 } 	
 } 
};
int student::rn_g;
int main()
{	int i,ch,rno,flag=0;
	string name,gender;
student *s[100];
do{
cout<<"\n1.register 2.searech 3.update";
cin>>ch;
switch(ch)
{
	 {
	    case 1:
				cout<<"\nEnter name and gender";
				cin>>name>>gender;
				s[i]=new student(name,gender);//created object and saved in s[i] pointer
				i++;
				break;
		case 2:
				cout<<"Enter roll number:";
				cin>>rno;
				for(int index=0;index<i;index++)
					{
				//	if(rno==s[index]->display())
				if(rno==s[index]->get_rollno())
					 {
					 s[index]->change();
					 	flag=1;
					 	break;
					 }
					 cout<<"1.change 2.not change";
					 cin>>ch;
					 switch(ch)
					 case 1:
					 	//cout<<"update your rn";
					case 2:
					 		break;
				}
				if(flag==0)
				cout<<"not found";
				break;
		case 3:
				cout<<"\nList of students...\n-------------------------------\n";
				for(int index=0;index<i;index++)
					{

					 	s[index]->display();
					 }
				break;
		case 0:
			cout<<"Exiting...";
			break;
		default:
			cout<<"Error in choice...";
			break;
	}
	
		}
	}while(ch!=0);
	return 0;
	}

