#include "main.h"


/**
 * print_chex - prints unsigned integer number
 * capital  hexadecimal value
 *
 * @args: argument of integer type
 * @buffer: pointer of 1byte size
 *
 * Return: number of bytes printed
 */

int print_chex(va_list args, char *buffer)
{
	unsigned int num;
	unsigned int pos_num, b, digit_num = 1, i = 0;
	char lett;

	num = va_arg(args, unsigned int);

	pos_num = num;

	b = pos_num;

	while (b > 15)
	{
		b /= 16;
		digit_num *= 16;
	}
	for (; digit_num > 0; digit_num /= 16)
	{
		b = (pos_num / digit_num);

		lett = (b + '0');

		if (b > 9)
			lett = ((b + 7) + '0');
		buffer[i] = lett, i++, pos_num %= digit_num;
	}
	return (_print_buf(buffer, i));
}
