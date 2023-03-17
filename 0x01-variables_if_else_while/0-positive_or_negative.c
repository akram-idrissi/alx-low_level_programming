#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints if the  is positive or negative
* n - stores the random generated number
* Return: Always 0 (Success)
*
*/
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n");
	else if (n < 0)
		printf("%d is negative\n");
        else if (n == 0)
		printf("is zero\n");
	return (0);
}
