//program to demonstrate the concept of extern storage class
//first file 
#include<stdio.h>

int count;
extern void Write_extern();

int main()
{

count = 5;
Write_extern();

return 0;
}

