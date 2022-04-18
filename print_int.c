#include "main.h"


/**
 * print_int - prints signed integer number
 *
 * @args: argument of integer type
 * @buffer: pointer of 1byte size
 *
 * Return: number of bytes printed
 */

int print_int(va_list args, char *buffer)
{
	int num, pos_num, b, digit_num = 1, i = 0;
	char lett;

	free(buffer);
	buffer = malloc(sizeof(char) * 10);

	num = va_arg(args, int);

	if (num < 0)
	{
		lett = 45;
		buffer[i] = lett;
		pos_num = num * -1;
		i++;
	}
	else
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
