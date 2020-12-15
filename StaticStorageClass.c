//program for static storage class specifier

#include<stdio.h>

int add(static int a,static int b)            //error: storage class specified for parameter 'a' 'b'
{
   return a+b;
}

int main()
{
 int ans = 0;
 ans = add(2,3);
 printf("Addition is :%d",ans);
 
 return 0;
}