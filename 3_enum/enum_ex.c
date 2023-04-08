#include <stdio.h> 

enum DaysOfWeek { 
    Monday, 
    Tuesday, 
    Wednesday, 
    Thursday, 
    Friday, 
    Saturday, 
    Sunday 
}; 

int main() { 
    // new data type
    enum DaysOfWeek today = Friday; 

    switch(today) { 
        case Monday: 
            printf("Today is Monday\n"); 
            break; 
        case Tuesday: 
            printf("Today is Tuesday\n"); 
            break; 
        case Wednesday: 
            printf("Today is Wednesday\n"); 
            break; 
        case Thursday: 
            printf("Today is Thursday\n"); 
            break; 
        case Friday: 
            printf("Today is Friday\n"); 
            break; 
        case Saturday: 
            printf("Today is Saturday\n"); 
            break; 
        case Sunday: 
            printf("Today is Sunday\n"); 
            break; 
        default: 
            printf("Invalid day of week\n"); 
            break; 
    } 
    
    printf("\n@frk: PASS TEST.\n"); 
    return 0; 
} 