#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n%10;
	/* your code goes there */
	if(last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5", n, last_digit);
	else if(last_digit == 0)
		printf("Last digit of %d is %d and is 0", n, last_digit);
	else if(last_digit != 0 && last_digit < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last_digit);
	return (0);
}