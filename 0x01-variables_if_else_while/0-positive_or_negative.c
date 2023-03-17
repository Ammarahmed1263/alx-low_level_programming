#include <stdlib.h>
#include <time.h>

/**
 * main - generate number and check
 *
 * Description: generates random number
 * then prints it with telling if it's positve,
 * negative or zero
 * Return: 0 always
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);

	return (0);
}
