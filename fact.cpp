//factorial of number and check it factorial of any



#include<iostream> //header file
using namespace std;

int fact(int no)
	{
      if (no==1)
			return 1;
	 else
			return no*fact(no-1);
   }

int main()//start of code
{
	int no,n,flag=0;//no
	cout<<"\nenter number to check:";
	cin>>no;


	for(n=1;fact(n)<=no;n++)
	{
	 if (no==fact(n))
		{
		cout<<no<<" is factorial of "<<n;
		flag=1;//yes
	    }
    }
	if(flag==0)
		cout<<no<<" is not factorial of any";
	return 0;
}