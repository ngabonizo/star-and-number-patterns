

#include <stdio.h>

int main()
{
    int N, i, j;

  printf("Enter number of rows/cols: ");
  scanf("%d",&N);

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=N; j++)
        {
            
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}
