/*
Given a time in -hour AM/PM format, convert it to military (24-hour) time.
*/


#include<stdio.h>
int main()
{
	int hr,min,sec;
	char mer[4];
	printf("enter time in hh:mm:ss am/pm format:");
	scanf("%02d:%02d:%02d %s",&hr,&min,&sec,mer);
	if(hr==12 && mer[0]=='a')
	{
		hr=00;
		printf(" %02d:%02d:%02d",hr,min,sec);
	}
	else if(mer[0]=='a')
	{
		printf(" %02d:%02d:%02d",hr,min,sec);
	}
	else if(mer[0]=='p' && hr==12)
	{
		hr=13;
		printf(" %02d:%02d:%02d",hr,min,sec);
	}
	else if(mer[0]=='p')
	{
		hr=hr+12;
		printf(" %02d:%02d:%02d",hr,min,sec);
	}
	return 0;
}
