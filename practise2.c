/*

    Write a program that prints the numbers from 1 to 100 and for multiples of ‘3’ print “Fizz” instead of the number and for the multiples of ‘5’ print “Buzz”. 
    and for multiples of both 3 and 5 print "fizzbuzz" instead of  number

*/

#include <stdio.h>

int main()
{
    int i;
    printf("the numbers from 1 to 100 are : ");
    for(i=1;i<=100;i++)
    {
         if(i%3==0 && i%5==0)
        {
            printf(" fizzbuzz");
        }
        else if(i%3==0)
        {
            printf(" fizz");
            
        }
        
        else if(i%5==0)
        {
            printf(" buzz");
        }
        
        
        else
        {
            printf(" %d",i);
        }
      
    }

    return 0;
}
