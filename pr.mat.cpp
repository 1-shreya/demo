//sum of column


#include <iostream>
//2d array
using namespace std;
int main()
{
	int m[10][10],rows,columns,r,c,sum=0;
	cout<<"Enter number of rows and columns\n";
	cin>>rows>>columns;
	for(r=0;r<rows;r++)
		{
		  for(c=0;c<columns;c++)
			{
				cout<<"\nEnter element at "<<r<<","<<c<<" :";
				cin>>m[r][c];
			}
		}

	cout<<"Entered matrix is";
	for(r=0;r<rows;r++)
		{ cout<<"\n";//start on new line
		  for(c=0;c<columns;c++)
			{
			  cout<<m[r][c]<<"\t";
		    }
     	}
     	cout<<"\nAddition is:";
		  for(c=0;c<columns;c++){
		  sum=0;
		  for(r=0;r<rows;r++)
			{
				sum=sum+m[r][c];
			 //sum++;
		    }
		    cout<<sum<<"\t";
     	}
		return 0;
}







