#include <stdio.h> 
int main() 
{ 
    int rows = 4; 
    int n = 1; 
    // outer loop 
    for (int i = 0; i < rows; i++) { 
        // innter loop 
        for (int j = 0; j <= i; j++) { 
            printf("%d ", n++); 
        } 
        printf("\n"); 
    } 
    return 0; 
}
