//program for register storage class

#include<stdio.h>

int main()
{
 register int a = 200;
 printf("value of a is : %d",a);
 //printf("adress of a is : %d",&a);     //error: address of register variable 'a' requested(we cant compute the adress of variable of register storage class)
 return 0;
 }
 
 //output: value of a is : 200