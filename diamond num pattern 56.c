/**
 * C program to print the given number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    // Iterate through upper half triangle of the pattern
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=(i * 2 - 1); j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    // Iterate through lower half triangle of the pattern
    for(i=N-1; i>=1; i--)
    {
        for(j=1; j<=(i * 2 - 1); j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
