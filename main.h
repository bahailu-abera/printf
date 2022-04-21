#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct print - struct for print function
 *
 * @conv_spec: conversion specifier.
 * @f: pointer to the printer function
 *
 * Return: none
 */
typedef struct print
{
	char *conv_spec;
	int (*f)(va_list, char *);
} print_t;

int (*get_pnt_funct(const char *s, int *pos))(va_list, char *);
int print_char(va_list args, char *buffer);
int print_str(va_list args, char *buffer);
int print_int(va_list args, char *buffer);
int print_unint(va_list args, char *buffer);
int _printf(const char *format, ...);
int _print_buf(char *buf, int n);
int print_bin(va_list args, char *buffer);
int print_address(va_list, char *buffer);
int print_shex(va_list, char *buffer);
int print_chex(va_list, char *buffer);
int print_octal(va_list, char *buffer);
int custom_str(va_list, char *buffer);
int pnt_plus_int(va_list, char *buffer);
int pnt_space_int(va_list, char *buffer);
int pnt_o_octal(va_list, char *buffer);
int pnt_upp_hex(va_list, char *buffer);

#endif
