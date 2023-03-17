#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - return last digit of random number
 *
 * Description: this function get random
 * variable and return last digit of it
 * with telling information about it
 * Return: 0 always
 */
int main(void)
{
	int n, n_mod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	n_mod = n % 10;
	if (n_mod > 5)
		printf("Last digit of %i is %i and is greater than 5", n, n_mod);
	else if (n_mod == 0)
		printf("Last digit of %i is %i and is 0", n, n_mod);
	else if (n_mod < 6 && n_mod != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0", n, n_mod);
	return (0);
}
