#include "main.h"


/**
 * print_unint - prints unsigned integer number
 *
 * @args: argument of integer type
 * @buffer: pointer of 1byte size
 *
 * Return: number of bytes printed
 */

int print_unint(va_list args, char *buffer)
{
	unsigned int num;
	unsigned int pos_num, b, digit_num = 1, i = 0;
	char lett;

	num = va_arg(args, unsigned int);

	pos_num = num;

	b = pos_num;

	while (b > 9)
	{
		b /= 10;
		digit_num *= 10;
	}
	for (; digit_num > 0; digit_num /= 10)
	{
		lett = ((pos_num / digit_num) + 48);
		buffer[i] = lett, i++, pos_num %= digit_num;
	}
	return (_print_buf(buffer, i));
}
