#include <stdio.h> 
int main() 
{ 
    int rows = 5; 
    // first outer 
    for (int i = 0; i < 2 * rows - 1; i++) { 
        int temp; 
        if (i < rows) { 
            temp = 2 * i + 1; 
        } 
        else { 
            temp = 2 * (2 * rows - i) - 3; 
        } 
        // loop to print leading spaces 
        for (int j = 0; j < temp; j++) { 
            printf(" "); 
        } 
        // loop to print star * 
        for (int k = 0; k < 2 * rows - temp; k++) { 
            printf("* "); 
        } 
        printf("\n"); 
    } 
    return 0; 
}
