/*
Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. 
Then print the respective minimum and maximum values as a single line of two space-separated long integers.*/


#include<stdio.h>
int main()
{
	int arr[5];
	int i;
	int j;
	int temp;
	int min=0,max=0;
	printf("enter the array elements\n");
	for(i=0;i<5;i++)
	{
		scanf(" %d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	for(i=0;i<4;i++)
	{
		min=min+arr[i];
	}
	for(i=1;i<5;i++)
	{
		max=max+arr[i];
	}
	printf(" %d  %d",min,max);
	return 0;
}
