#include<iostream> //header file
using namespace std;
//global area
void min(int no1,int no2)//no1 no2 local to function
{
//	cout<<"\n in function\n";
	if(no1>no2)
	{
		cout<<no1<<"is greater";
	}
	else{
		cout<<no2<<"\nis greater";
	}
//	cout<<no1<<" + "<<no2<<" = "<<no1+no2;
//	cout<<"\n from function tata\n";
}

int main()//start of code
{//scope start
	int n1,n2;
    //cout<<"\nMain Starts.................";
    cout<<"\n\nEnter 2 numbers:\n";
    cin>>n1>>n2;
    min(n1,n2);
    //cout<<"\nMain Ends.................";
	return 0;//return to indicate program is over
}//scope end