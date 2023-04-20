#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - summ all arguments
 * @n: number of elements
 * Return: the sum | 0 (failed)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < (int) n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
