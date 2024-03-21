#include<iostream>
using namespace std;
/*int nege(int a[]){
	int count;
	//if(count<0)
	if(count<0){
		count++;
	//	return(count);
	}
	else{
		cout<<"\ntotal ";
	}
//	cout<<"\nnegative element"<<count;
	return(count);
}*/

int main()
{
	int n,a[20],i,count=0;
/*	cout<<"Enter number";
	cin>>n;*/
	for(i=0;i<5;i++)
	{
		cout<<"enter element";
		cin>>a[i];
	}
	if(a[i]<0){
	//	cout<<"negative";
		count++;
	}
/*	if(a[i]<0){
		count++;
	//	return(count);
	}
	else{
		cout<<"total ";
	}*/
//	nege(a);
cout<<count;
//	cout<<"negative element"<<nege(a);

	return 0;

}