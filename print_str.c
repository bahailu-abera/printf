#include "main.h"

/**
 * print_str - prints number of character
 * to the console
 *
 * @args: arguments
 * @buffer: pointer to character
 *
 * Return: number of character printed
 */

int print_str(va_list args, char *buffer)
{
	int i = 0;
	char *null;

	buffer = va_arg(args, char *);

	if (!buffer)
	{
		null = "(null)";
		return (_print_buf(null, 6));
	}

	for (; buffer[i] != '\0'; i++)
		;

	return (_print_buf(buffer, i));
}
