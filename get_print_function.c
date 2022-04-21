#include "main.h"

/**
 * get_pnt_funct - returns the printer function
 *
 * @s: formated string
 * @pos: index of conversion
 * specifier
 *
 * Return: function pointer
 */

int (*get_pnt_funct(const char *s, int pos))(va_list args, char *buf)
{
	print_t pnt[] = { {"c", print_char}, {"s", print_str},
		{"d", print_int}, {"i", print_int},
		{"b", print_bin}, {"u", print_unint},
		{"x", print_shex}, {"X", print_chex},
		{"S", custom_str},
		{"o", print_octal}, {NULL, NULL}};

	int i;

	for (i = 0; pnt[i].conv_spec != NULL; i++)
	{
		if (s[pos] == pnt[i].conv_spec[0])
			return (pnt[i].f);
	}

	return (NULL);
}

