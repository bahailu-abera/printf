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
	int num, temp;
	unsigned int i = 0, j, a;

	num = va_arg(args, int);

	if (num == 0)
	{
		buffer[0] = '0';
		_print_buf(buffer, 1);
		return (1);
	}
	else if (num < 0)
		a = num * -1;
	else
		a = num;

	while (a > 0)
	{
		buffer[i] = (a % 2) + '0';
		a /= 2;
		i++;
	}

	for (j = 0, i++; j < i / 2; j++)
	{
		temp = buffer[j];
		buffer[j] = buffer[i - (j + 1)];
		buffer[i - (j + 1)] = temp;
	}

	_print_buf(buffer, i);

	return (i);

}
