#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_strings - print all arguments
 * @sep: separator
 * @n: number of elements
 */
void print_strings(const char *sep, const unsigned int n, ...)
{
	va_list s;
	unsigned int i;
	char *str;

	va_start(s, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(s, char*);

		if (str == NULL)
			str = "(nil)";

		printf("%s", str);
		if (sep != NULL && i < (n - 1))
		{
			printf("%s", sep);
		}
	}
	va_end(s);
	printf("\n");
}
