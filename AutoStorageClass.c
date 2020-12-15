//program  for  auto storage class

#include<stdio.h>

 //auto int no;        //error: file-scope declaration of 'no' specifies 'auto'(because auto have local scope and we declare in global scope)
 
int main()
{
 auto int no;          // OR int no;  bydefault data member are auto so if you not use auto keyword its bydefault auto storage class
 
 printf("Enter the value of no\n");
 scanf("%d",&no);
 printf("The entered value is:%d",no);
 
 return 0;
}
/*
Enter the value of no
12
The entered value is:12
*/