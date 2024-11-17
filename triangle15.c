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
        k = (i * 2) - 1;

        // Logic to print numbers
        for(j=i; j<=N; j++, k+=2)
        {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}
