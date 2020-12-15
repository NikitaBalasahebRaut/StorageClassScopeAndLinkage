//use extern keyword that declare i main file

#include<stdio.h>

extern int count;

void Write_extern()
{
  printf("count is %d",count);
}
//output: count is 5