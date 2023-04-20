#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - print all arguments
 * @format: format holder
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i, flag;
	char *val;

	va_start(args, format);

	for (i = 0; i < strlen(format); i++)
	{
		flag = 1;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			val = va_arg(args, char *);
			if (val == NULL)
				val = "(nil)";
			printf("%s", val);
			break;
		default:
			flag = 0;
			break;
		}
		if (i < strlen(format) - 1 && flag)
			printf(", ");
	}
	va_end(args);
	printf("\n");
}
