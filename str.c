//write a program scan string and replace all character with $ sign and print string after replacement


#include<stdio.h>
main()
{  char s[20],i,count=0 ,a;
	int len;
	printf("Enter your string:");
	scanf("%s",&s);
	for (i=0;i<len;i++)
	{
		if(s[i]=='a'||'e'||'i'||'o'||'u')
		{
			//a='$';
			//count++;
		}
		//printf("string[%d]=%c",i,s[i]);
		
	}
	printf("Count of voewels in the given string is %d\n",count);
	//printf("string[%d]=%c",i,s[i]);
	printf("String after replacement is:%s",s[i]);
	
	
}