#include "main.h"


/**
 * _print_buf - prints a buffer to the console
 *
 * @buf: buffer pointer
 * @n: number of bytes to be printed
 * Return: number of bytes  printed
 */

int _print_buf(char *buf, int n)
{
	return (write(1, buf, n));
}
