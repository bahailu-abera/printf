#include "main.h"
#include <stdio.h>


int main(void)
{
	int len;

	char *str = "bahailu";

	len = _printf("The number A: %d B: %i C:%d D: %i \n", 'a', 'b', "bahailu", str);

	printf("length: %d\n", len);

	return (0);
}
