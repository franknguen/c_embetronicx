#include <stdio.h> 

const int MAX_SIZE   = 10; 
volatile int counter = 0; 
static int count     = 0; 

void frk_print(char *s)
{ 
    printf("\n@FRK: [%s]", s); 
    count++; 
} 

int main() 
{ 
    printf("\nMAX_SIZE = [%d]", MAX_SIZE); 

    while(counter < 10)
    { 
        printf("\nCounter: [%d]", counter); 
        frk_print("To increase count."); 
        counter ++; 
    } 

    printf("\nCount: [%d]\n", count); 

    printf("\n@frk: PASS TEST.\n"); 
    return 0; 
} 