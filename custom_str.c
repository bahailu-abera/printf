#include "main.h"


/**
 * custom_hex - prints hexadecimal value
 * of custom characters
 * @ascii: ascii value of custom character
 *
 * Return: number of printed bytes
 */

int custom_hex(int ascii)
{
	unsigned int num, digit = 1, b;
	char lett, zero = '0';
	int l = 0;
	char slash = '\\';
	char x = 'x';

	num = ascii;
	b = num;

	while (b > 15)
	{
		digit *= 16;
		b /= 16;
	}

	l += _print_buf(&slash, 1);
	l += _print_buf(&x, 1);

	for (; digit > 0; digit /= 16)
	{
		b = (num / digit);

		if (b > 9)
			lett = (((num / digit) + 7) + '0');
		else
			lett = (num / digit) + '0';

		if (digit == 1 && l == 2)
			l += _print_buf(&zero, 1);

		l += _print_buf(&lett, 1);
		num %= digit;
	}

	return (l);
}


/**
 * custom_str - prints custom character
 * to the console
 *
 * @args: arguments
 * @buffer: pointer to character
 *
 * Return: number of character printed
 */

int custom_str(va_list args, char *buffer)
{
	int i = 0, len = 0;
	char *null;
	char lett;

	buffer = va_arg(args, char *);

	if (!buffer)
	{
		null = "(null)";
		return (_print_buf(null, 6));
	}

	for (; buffer[i] != '\0'; i++)
	{
		if (buffer[i] < 32 || buffer[i] >= 127)
		{
			len += custom_hex(buffer[i]);
		}
		else
		{
			lett = buffer[i];
			len += _print_buf(&lett, 1);
		}
	}

	return (len);
}
