/** hello-world.c starter file to test arago work profiles
/*  
*/

#include <stdio.h>

int ret_foo();

void main() 
{
    printf("Hello world %d\n",ret_foo());
    printf("last line EOF: \n");
}

int ret_foo() {
short nR = 0xAB;
    return (int)nR;
}
