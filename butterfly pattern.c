#include <stdio.h>
#include <math.h>
void Star(int n)
{
while (n--)
{
 printf("* ");
}
}
void Spaces(int n)
{
while (n--)
{
 printf("  ");
}
}
int main()
{
int height;
printf("Enter the height of the pattern: ");
scanf("%d", &height);
printf("The pattern of height %d: \n\n", height);
int spaces = 2 * (height - 1);
for (int i = 1; i <= height; i++)
{
 Star(i);
 Spaces(spaces);
 Star(i);
 printf("\n");
 spaces -= 2;
}
spaces = 2;
for (int i = height - 1; i > 0; i--)
{
    Star(i);
 Spaces(spaces);
 Star(i);
 printf("\n");
 spaces += 2;
}
return 0;
}
