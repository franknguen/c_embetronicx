#include <stdio.h> 

// we need to declare it in gcc or use static? 
void inline test_inline_func1 (int a, int b) __attribute__((always_inline)); 
int inline test_inline_func2(int x) __attribute__((always_inline)); 

//static void inline test_inline_func1 (int a, int b)  
void inline test_inline_func1 (int a, int b)  
{ 
    printf ("a=%d and b=%d\n", a, b); 
} 
//static int inline test_inline_func2(int x)  
int inline test_inline_func2(int x)  
{ 
    return x*x; 
} 

int main()  
{ 
    int tmp; 
    test_inline_func1(2,4); 
    tmp = test_inline_func2(5); 
    printf("square val=%d\n", tmp); 

    printf("\n@frk: PASS TEST.\n"); 
    return 0; 
} 