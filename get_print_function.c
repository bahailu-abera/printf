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

int (*get_pnt_funct(const char *s, int *pos))(va_list args, char *buf)
{
	print_t pnt[] = { {"c", print_char}, {"s", print_str},
		{"d", print_int}, {"i", print_int},
		{"b", print_bin}, {"u", print_unint},
		{"x", print_shex}, {"X", print_chex},
		{"S", custom_str}, {"p", print_address},
		{"+d", pnt_plus_int}, {"+i", pnt_plus_int},
		{" d", pnt_space_int}, {" i", pnt_space_int},
		{"o", print_octal}, {"#o", pnt_o_octal},
		{"#x", print_address}, {"#X", pnt_upp_hex},
		{" +d", pnt_plus_int}, {"+ d", pnt_plus_int},
		{" +i", pnt_plus_int}, {"+ i", pnt_plus_int},
		{NULL, NULL}};

	int i, j, k = 0;
	(*pos)++;
	j = *pos;

	for (i = 0; pnt[i].conv_spec != NULL; i++)
	{
		if (s[*pos] == pnt[i].conv_spec[k])
		{
			if (pnt[i].conv_spec[1] == '\0')
				return (pnt[i].f);

			while (s[*pos] == pnt[i].conv_spec[k])
				(*pos)++;

			k++;
			if (s[*pos] == pnt[i].conv_spec[k])
			{
				if (pnt[i].conv_spec[k + 1] == '\0')
					return (pnt[i].f);
				(*pos)++;
				if (s[*pos] == pnt[i].conv_spec[++k])
					return (pnt[i].f);
			}

			*pos = j;
			k = 0;
		}
	}

	return (NULL);
}

