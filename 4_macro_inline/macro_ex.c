#include<stdio.h> 

#define MAX_SIZE 10 
#define ENABLE_1 1 

int main(void) 
{ 
    int size = 0; 
    size = size + MAX_SIZE; 
    printf("\n The value of size is [%d]\n", size); 
#ifdef ENABLE_1 
    printf("\n Frank defined ENABLE_1. \n"); 
#endif 

#ifdef ENABLE_2 
    printf("\n Frank not defined ENABLE_2 yet. \n"); 
#endif 

    printf("\n@frk: PASS TEST.\n"); 
    return 0; 

} 