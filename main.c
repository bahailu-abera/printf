#include "main.h"
#include <stdio.h>


int main(void)
{
	int len, len1;

	char *str = "bahailu";

	len = _printf("The number A: %d B: %i C:%d D: %i binary: %b %b\n", 'a', 'b', "bahailu", str, -98,  98);
	len1 =  printf("The number A: %d B: %i C:%d D: %i binary: %b %b\n", 'a', 'b', "bahailu", str, -98, 1);

	printf("length: %d\n", len);
	printf("plen: %d\n", len1);
	return (0);
}
