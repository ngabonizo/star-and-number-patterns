/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, k, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        // Checking even or odd 
        if(i & 1)
            k = 1;
        else
            k = 2;

        // Logic to print numbers
        for(j=1; j<=i; j++, k+=2)
        {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}
