#include "main.h"


/**
 * rever_binary - fills the array from right to left
 * with the binary value of the number
 * @binary: array of memory
 * @size: size of binary memory in byte
 * @quotient: the number in decimal value
 * Return: array of binary number
 */

char *rever_binary(char *binary, int quotient, int size)
{
	int i;

	for (i = 0; i < size; i++)
		binary[i] = '0';
	binary[i] = '\0';

	for (i = size - 1; quotient > 1; i--)
	{
		if (quotient % 2 != 0)
			binary[i] = '1';
		quotient /= 2;
	}
	if (quotient != 0)
		binary[i] = '1';

	return (binary);
}


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
	int num, quotient, size;
	char *binary;

	num = va_arg(args, int);
	size = (sizeof(int) * 8) + 1;
	binary = malloc(size);

	if (binary == NULL)
		return (-1);
	if (num == 0)
	{
		buffer[0] = '0';
		_print_buf(buffer, 1);
		return (1);
	}
	else if (num < 0)
		quotient = num * -1;
	else
		quotient = num;

	binary = rever_binary(binary, quotient, size - 1);

	_print_buf(binary, size);

	return (size - 1);

}
