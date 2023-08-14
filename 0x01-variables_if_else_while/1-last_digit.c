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

/* Generate a random number */
n = rand() - RAND_MAX / 2;

/* Print the generated number */
printf("Last digit of %d is %d ", n, n % 10);

/* Check the last digit and print the appropriate message */
if (n % 10 > 5)
{
printf("and is greater than 5\n");
}
else if (n % 10 == 0)
{
printf("and is 0\n");
}
else
{
printf("and is less than 6 and not 0\n");
}

return (0);
}

