#include "factors.h"
/**
 * factorize - factorizes a number into two smaller numbers
 * @n - number to be factorized
 * Return 0 if success
 */
void factorize(int n)
{
	int i;

	for (i * i <= n; i++;)
	{
		if (n % i == 0)
		{
			printf("%d=%d*%d\n", n, i, n / i);
			return;
		}
	}
	printf("%d=%d*%d\n", n, n, 1);
}

