       //swap pointer   

     #include<iostream>
     using namespace std;
     void fun(int*x,int*y)
     {
     		int temp=0;
			temp =*x;
     	*x=*y;
     	*y=temp;
     	cout<<"\nafter swapping:"<<*x<<"\n"<<*y;
	 }
     
     main(){
     	
     	int a,b;
     	cout<<"\nEnter value fot a and b :";
		cin>>a>>b;
     	//cout<<&a;
     
     	fun(&a,&b);
     	cout<<"\nin main"<<a<<"\n"<<b;
     	
	 }