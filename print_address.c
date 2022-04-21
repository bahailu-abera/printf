#include "main.h"

/**
 * print_address - prints the address
 * of variables and pointers
 *
 * @args: the arguments
 * @buffer: memory space
 *
 * Return: number of printed
 * bytes
 */

int print_address(va_list args, char *buffer)
{
	unsigned long int addr, a, b = 1;
	unsigned int i = 0;
	char lett;


	addr = va_arg(args, unsigned long int);

	if (addr == 0)
	{
		buffer[i] = '0', i++;
		return (_print_buf(buffer, i));
	}
	if (!addr)
	{
		buffer = "(nil)";
		return (_print_buf(buffer, 5));
	}
	a = addr;
	buffer[i] = '0', i++, buffer[i] = 'x', i++;
	while (a > 15)
	{
		b *= 16;
		a /= 16;
	}

	for (; b > 0; b /= 16)
	{
		a = (addr / b);

		if (a < 9)
			lett = (a + '0');
		else
			lett = ((a + 39) + '0');
		buffer[i] = lett, i++, addr %= b;
	}

	return (_print_buf(buffer, i));
}
