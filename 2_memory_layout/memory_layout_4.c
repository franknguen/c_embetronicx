#include <stdio.h>

int embetronicx = 1;   //uninitialized global variable. It will stored in bss

int main(void)
{
    static int i = 10;  //Initialized static variable stored in Initialized Data Segment
    return 0;
}
