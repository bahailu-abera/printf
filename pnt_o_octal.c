#include "main.h"


/**
 * pnt_o_octal - prints unsigned integer number
 * using octal base with leading zero
 * @args: argument of integer type
 * @buffer: pointer of 1byte size
 *
 * Return: number of bytes printed
 */

int pnt_o_octal(va_list args, char *buffer)
{
	unsigned int num;
	unsigned int pos_num, b, digit_num = 1, i = 0;
	char lett;

	num = va_arg(args, unsigned int);

	pos_num = num;

	buffer[i] = '0', i++;

	if (num == 0)
		return (_print_buf(buffer, i));
	b = pos_num;
	while (b > 7)
	{
		b /= 8;
		digit_num *= 8;
	}
	for (; digit_num > 0; digit_num /= 8)
	{
		lett = ((pos_num / digit_num) + 48);
		buffer[i] = lett, i++, pos_num %= digit_num;
	}
	return (_print_buf(buffer, i));
}
