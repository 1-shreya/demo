//saddle point 

#include <iostream>
//2d array
using namespace std;
int main()
{
	int m[10][10],rows,columns,r,c,min,min_in_row,min_column,max,flag;
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
	cout<<"\nEntered matrix is";
	for(r=0;r<rows;r++)
		{ cout<<"\n";//start on new line
		  for(c=0;c<columns;c++)
			{
			  cout<<m[r][c]<<"\t";
		    }
     	}
	//min of rows
	for(r=0;r<rows;r++)
		{
		  cout<<"\nin row "<<r;
		  min_in_row=m[r][0];//ref

		  for(c=0;c<columns;c++)
			{
			  min_column=c;
			  if(m[r][c]<min_in_row)
			  	{
				 min_in_row=m[r][c];
				 min_column=c;
		        }
		     }
			cout<<" min is:"<<min_in_row;

			flag=0;
			for(int i=0;i<rows;i++)
			{
			  if(m[i][min_column]>min_in_row)
			  {
			  	flag=1;
			  	break;
			  }
			}
			if(flag==0)
				cout<<min_in_row<<"is the saddle point";
     	}

		return 0;
}


