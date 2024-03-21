#include<iostream> //header file
using namespace std;
int voter(int age){
		if(age>18)
	{
		//cout<<"you can vote";
		return (1);
	}
	else{
	
		return(0);
	}
	//return (y);
}
int main()
{
	int age,status;
	cout<<"\nEnter your age:";
	cin>>age;
	age=18-age;
	status=voter(age);
	if(status==1)
	cout<<"\nyou can vote";
	else
	cout<<"\nyou wait to vote for "<<age<<"year";
	}