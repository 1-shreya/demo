//length of string 
#include<iostream>
     using namespace std;
     int length(char *str)
     {
     	int i;
     	while(*str!='\0')
     	{
     		i++;
     		str++;
		 }
		 return(i);
	 }
     main(){
     	
     char str[40];
     int len;
     cout<<"Enter name:";
     cin>>str;
     len=length(str);
     cout<<"Length is:"<<len;
	 }