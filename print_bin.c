#include "main.h"

/**
 * print_bin - prints unsigned int
 * in binary format
 *
 * @args: arguments
 * @buffer: the pointer
 *
 * Return: number of printed int
 */

int print_bin(va_list args, char *buffer)
{
	unsigned int num;
	unsigned int i = 0, j, temp;

	free(buffer);
	buffer = malloc(sizeof(char) * 10);

	num = va_arg(args, int);

	while (num > 0)
	{
		buffer[i] = (num % 2) + '0';
		num /= 2;
		i++;
	}

	for (j = 0, i++; j < i / 2; j++)
	{
		temp = buffer[j];
		buffer[j] = buffer[i - (j + 1)];
		buffer[i - (j + 1)] = temp;
	}
	return (_print_buf(buffer, i));

}
