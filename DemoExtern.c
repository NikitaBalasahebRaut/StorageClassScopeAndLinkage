//program for extern storage class

#include<stdio.h>

int main()
{
 extern int a = 200; // error: 'a' has both 'extern' and initializer (exter have global scope)
 
 printf("value of a is :%d",a);
 
 return 0;
}