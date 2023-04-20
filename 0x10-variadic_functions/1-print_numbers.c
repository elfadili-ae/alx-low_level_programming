#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - summ all arguments
 * @sep: separator
 * @n: number of elements
 */
void print_numbers(const char *sep, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n == 0)
		return;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (sep != NULL && i < (n - 1))
			printf("%s", sep);
	}
	va_end(args);
	printf("\n");
}
