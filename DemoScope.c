
// C program to illustrate scope of variables
 
#include<stdio.h>
 
int main()
{
    // Initialization of local variables
    int x = 1, y = 2, z = 3;
 
    printf("x = %d, y = %d, z = %d\n",
    x, y, z);
    {
 
        // changing the variables x & y
        int x = 10;
        float y = 20;
         
        printf("x = %d, y = %f, z = %d\n",
        x, y, z);
        {
 
            // changing z
            int z = 100;
            printf("x = %d, y = %f, z = %d\n",
            x, y, z);
        }
    }
    return 0;
}
/*
output
x = 1, y = 2, z = 3
x = 10, y = 20.000000, z = 3
x = 10, y = 20.000000, z = 100

*/