#include "main.h"

/**
 * print_char - print a character to the console
 *
 * @args: arguments
 * @buffer: pointer to character
 *
 * Return: 1(number of printed character)
 */

int print_char(va_list args, char *buffer)
{
	buffer[0] = va_arg(args, int);

	return (_print_buf(buffer, 1));
}

