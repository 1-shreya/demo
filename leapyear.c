// write a program to print leap year between year 2000 to 2030 and print total leap year

#include<stdio.h>
main()
{
	int year=2000;
	while(year<=2030)
	{
			if(year%4==0)
			{
					printf(" leap year %d",year);
					year++;
			}
		
		else
	{
			printf(" Not a leap year");
				
	}
	}		
}
	