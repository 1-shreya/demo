#include <iostream>
//2d array
using namespace std;
int main()
{
	int m[10][10],rows,columns,r,c,min,max;
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
	//sum of rows
	for(r=0;r<rows;r++)
		{
		  cout<<"\nmin row "<<r;
		  min=m[r][0];//ref
		  for(c=0;c<columns;c++)
			{
			  if(m[r][c]<min)
			  	min=m[r][c];
		    }
			cout<<"\nmin is:"<<min;
     	}
    //sum of columns
		for(c=0;c<columns;c++)
		{
		cout<<"max in column";
				max=m[0][c];
		 // sum=0;
		  for(r=0;r<rows;r++)
			{
			if(m[r][c]<max)
			  	max=m[r][c];
			  //sum+=m[r][c];
		    }
		cout<<"\nmax is"<<max;     	}
		/*
     	//sum of diagonal
     	sum=0;
		for(c=0;c<columns;c++)
		{
		  for(r=0;r<rows;r++)
			{
			  if(r==c)
			  	sum+=m[r][c];
		    }
     	}
     	m[r][c]=sum;*/


		return 0;
}


