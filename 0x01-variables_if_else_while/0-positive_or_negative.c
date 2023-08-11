#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
/* Seed the random number generator */
srand(time(0));
/* Generate a random number between -1000 and 1000 */
n = rand() % 2001 - 1000;
/* Print the generated number */
printf("%d", n);
/* Check if the number is positive, negative, or zero */
if (n > 0)
{
printf(" is positive\n");
}
else if (n < 0)
{
printf(" is negative\n");
}
else
{
printf(" is zero\n");
}
 return (0);
}

