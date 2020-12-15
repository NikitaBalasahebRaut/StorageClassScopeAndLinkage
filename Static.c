//program to demonstrate the concept of static storage class

#include<stdio.h>

//function declaration
void fun();

//global variable
static int count = 5;     //global variable

int main()
{
 while(count--)
 {
   fun();
 }
 return 0;
}

void fun()
{
static int i  = 5;     local static variable
i++;
printf("i is %d ad count is %d\n",i,count);
}

/*
output
i is 6 ad count is 4
i is 7 ad count is 3
i is 8 ad count is 2
i is 9 ad count is 1
i is 10 ad count is 0
*/
