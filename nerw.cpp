//add of row

#include <iostream>
//2d array
using namespace std;
int main()
{
	int m[10][10],rows,columns,r,c,sum;
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
		{sum=0; 
		cout<<"\n";//start on new line
		  for(c=0;c<columns;c++)
			{
			  cout<<m[r][c]<<"\t";
			  sum=sum+m[r][c];
		    }
		    //sum=sum+m[r][c];
		    cout<<sum;
     	}
     	return 0;
     
}







