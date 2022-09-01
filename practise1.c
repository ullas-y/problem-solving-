/*
Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero.
 Print the decimal value of each fraction on a new line with 6 places after the decimal.*/




#include<stdio.h>
int main()
{
	int arr_count; int arr[100];
    int no_of_zeroes=0;
    int no_of_positive=0;
    int no_of_negative;
    int i;
    
    printf("enter the number of elements:");
    scanf("%d",&arr_count);
    printf("enter the array elements:");
    for(i=0;i<arr_count;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<arr_count;i++)
    {
        if(arr[i]==0)
        {
            no_of_zeroes++;
        }
        if(arr[i]>0)
        {
            no_of_positive++;
        }
        if(arr[i]<0)
        {
            no_of_negative++;
        }
    }
   
    float a=no_of_positive;
    float b=arr_count;
    float x=a/b;
    printf("%f\n",x);
    float c=no_of_negative;
    float y=c/b;
    printf("%f\n",y);
    float d=no_of_zeroes;
    float z=d/b;
    printf("%f\n",z);
    

return 0;
}
