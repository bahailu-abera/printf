#include "main.h"


/**
 * print_letter - prints single letter
 * @format: the string format
 * @index: index of the letterin the format
 * Return: 1(length of the letter)
 */

int print_letter(const char *format, int index)
{
	char *str;
	int l;

	str = malloc(sizeof(char));

	if (str == NULL)
		return (-1);
	str[0] = format[index];

	l = _print_buf(str, 1);
	free(str);

	return (l);
}

/**
 * _printf - formated output and data conversation
 *
 * @format: the input string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i, len = 0, (*f)(va_list, char *), flag = 0;
	char *buffer;
	va_list args;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			f = get_pnt_funct(format, &i);
			if (!f)
			{
				if ((format[i] == '\0') && flag == 0)
				{
					va_end(args);
					return (-1);
				}
				else if (format[i] == '%')
					len += print_letter(format, i);
				else
					len += print_letter(format, i - 1), flag = 1, i--;
			}
			else
			{
				buffer = malloc(sizeof(char) * 1024);
				if (buffer == NULL)
				{
					va_end(args);
					return (-1);
				}
				len += f(args, buffer), free(buffer);
			}
		}
		else
			len += print_letter(format, i);
	}
	va_end(args);
	return (len);
}
