#include<stdio.h>
main()
{
	int h,s,m;
	printf("Enter hour:");
	scanf("%d",&h);
	m=h*60;
	s=h*60*60;
	printf("\nminutes: %d",m);
	printf("\nSeconds:%d",s);
}