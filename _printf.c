#include "main.h"

/**
 * _printf - formated output and data conversation
 *
 * @format: the input string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int i;
	int len = 0;
	char *buffer;
	int (*f)(va_list, char *);
	va_list args;

	va_start(args, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			f = get_pnt_funct(format, i + 1);
			if (!f)
				return (-1);
			len += f(args, buffer);
			i++;
		}
		else
		{
			buffer = malloc(sizeof(char));
			buffer[0] = format[i];
			len += _print_buf(buffer, 1);
			free(buffer);
		}
	}

	return (len);
}
