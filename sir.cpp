//create class Calculator
//has add(no1,no2):to add and display no1 + no2 = no1+no2
//obj.add(10,20):     10 + 20 = 30
//has sub(no1,no2)
//has mul(no1,no2)
//has div(no1,no2)
//use menu driven code to 1.add 2 sub.... 0 exit
#include<iostream>
#include<string>
using namespace std;
class Calculator
{


 public:
 	//function members
 	void add(float no1,float no2)
 	{
 		cout<<no1<<" + "<<no2<<" = "<<(no1+no2);
    }
    void sub(float no1,float no2)
 	{
 		cout<<no1<<" - "<<no2<<" = "<<(no1-no2);
    }
    void mul(float no1,float no2)
 	{
 		cout<<no1<<" x "<<no2<<" = "<<(no1*no2);
    }
    void div(float no1,float no2)
 	{
 		cout<<no1<<" / "<<no2<<" = "<<(no1/no2);
    }

};
int main()//start of code
{
    Calculator c;
    int ch;
    float no1,no2;
    do
    {
    /*	cout<<"\n1.Add\n2.Sub\n3.Mul\n4.Div\n0.Exit";
    	cin>>ch;*/
    	
    	cout<<"\n1.Add\n2.Sub\n3.Mul\n4.Div\n0.Exit";
    	cin>>ch;
    	switch(ch)
    	{
    		case 1:
    			cout<<"\nEnter 2 numbers:\n";
    			cin>>no1>>no2;
    			c.add(no1,no2);
    			break;
    		case 2:
    			cout<<"\nEnter 2 numbers:\n";
    		cin>>no1>>no2;
    			c.sub(no1,no2);
    			break;
    		case 3:
    			cout<<"\nEnter 2 numbers:\n";
    		cin>>no1>>no2;
    			c.mul(no1,no2);
    			break;
    		case 4:
    			cout<<"\nEnter 2 numbers:\n";
    		cin>>no1>>no2;
    			c.div(no1,no2);
    			break;
    		case 0:
    			cout<<"\nExit...";
    			break;
    		default:
    			cout<<"\nCheck the option please";
    			break;

		}

	}while(ch!=0);
	return 0;//return to indicate program is over
}//scope end
				
				