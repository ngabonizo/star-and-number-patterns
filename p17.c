/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int N, i, j;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        // Print first part
        for(j=i; j>1; j--)
        {
            printf("%d", j);
        }

        // Print second part
        for(j=1; j<= (N-i +1); j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
