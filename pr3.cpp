#include <iostream>

using namespace std;
int main()
{
	int a[]={1,2,3,4},i,j,size,sum=5;
	//size=sizeof(a)/sizeof(a[0]);
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
 if(a[i]+a[j]==sum)

		cout<<a[i]<<","<<a[j]<<"\n";
}
	
	}
	return 0 ;
}
	