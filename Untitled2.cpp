/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, k, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=N; i>=1; i--)
    {
        k = i;

        // Logic to print numbers
        for(j=1; j<=i; j++, k++)
        {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}
