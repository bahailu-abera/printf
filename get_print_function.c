#include "main.h"

/**
 * get_print_funtion - returns the printer function
 *
 * @args: arguments
 * @buffer: pointer to character
 *
 * Return: function pointer
 */

int (*get_print_function(const char *s, unsigned int index))(va_list args, char *buffer)
{
	print_t pnt[] = { {"c", print_char}, {"s", print_str}, {NULL, NULL}};

	int i;

	for (i = 0; pnt[i].conv_spec != NULL; i++)
	{
		if (s[index] == pnt[i].conv_spec[0])
			return (pnt[i].f);
	}

	return (NULL);
}

