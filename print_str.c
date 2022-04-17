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
	unsigned int i = 0;

	buffer = va_arg(args, char *);

	if (buffer)
	{
		for (; buffer[i] != '\0'; i++)
			;
	}
	
	return (_print_buf(buffer, i));
}
