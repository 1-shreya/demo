//pointer

     #include<iostream>
     using namespace std;
     void fun(int*x)
     {
     	*x=*x+1;
     	cout<<"\X:"<<*x;
	 }
     
     main(){
     	
     	int a;
     	cout<<"Enter value of a:";
		cin>>a;
     	//cout<<&a;
     	fun(&a);
     	
	 }