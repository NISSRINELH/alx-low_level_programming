#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
int n;
/* Seed the random number generator */
srand(time(0));
/* Generate a random number */
n = rand() % (2 * RAND_MAX) - RAND_MAX;
/* Print the generated number */
printf("%d ", n);
/* Check if the number is positive, negative, or zero */
if (n > 0)
{
printf("is positive\n");
}
else if (n < 0)
{
printf("is negative\n");
}
else
{printf("is zero\n");
}
return 0;
}
