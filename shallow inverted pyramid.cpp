#include<stdio.h>

int main() {
    int i, j, N;
    
    printf("Enter number of rows: ");
    scanf("%d", &N);
    
    for(i = N; i >= 1; i--) {
        
        for(j = 1; j <= N - i; j++) {
            printf(" ");
        }
        
     
        for(j = 1; j <= 2 * i - 1; j++) {
        	
        	if(i==1 || j==1 || j==N*2-(2*i-1)){
        		 printf("*");
			}else{
				printf(" ");
			}
           
        }
        
        printf("\n");
    }
    
    return 0;
}

