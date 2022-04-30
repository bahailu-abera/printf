# printf()
-----------------------------------
The printf function project is alx school project where _printf imitates the
actual "printf" command located in the stdio.h library.
It contains some of the basic features and functions fond in the manual of printf.

_printf() is a function that performs formatted output conversion and print data. Its prototype is the following:

int _printf(const char *format, ...)

Where format contains the string that is printed. As _printf() is variadic function, it can receives 'n' arguments that replace by 'n' tags written inside the string.

The format tags prototype is the following:

%[flags][length]specifier
If the program runs successfully, the return value is the amount of chars printed.

# character specifier
| Specifier    | Character                  |
| ------------ | ---------------------------|
| S            | String of characters       |
| c            | signle character           |
| d or i       | signed decimal integer     |
| o            | signed octal (base 8)      |
| u            | unsigned decimal integer   |
| x            | unsigned hexadecimal integer|
| X            | Unsigned hexadecimal integer (Capital letters|
| p            | Pointer address|
| %            | % character |


# Flags and Descriptition 
| Flags             | descriptition |
|-----------------  | ---------------- |
| -                 | Left-justify within the given field width; Right justification is the default |
| +            |   Forces to precede the result with a plus or minus sign (+ or -) even for positive numbers. By default, only negative numbers are preceded with a -ve sign. |
| (space)           | If no sign is going to be written, a blank space is inserted before the value. |
| #            | Used with o, x or X specifiers the value is preceded with 0, 0x or 0X respectively for values different than zero. Used with e, E and f, it forces the written output to contain a decimal point even if no digits would follow. By default, if no digits follow, no decimal point is written. Used with g or G the result is the same as with e or E but trailing zeros are not removed. |


___________________________________________________________________________________________________________________________________

## File Functions 
---------------------------------------------------------------

# _printf.c
our own function That performs formatted output conversion and print data.
_________________________________________________________________________
# main.h
Header File were All prototypes and standard library headers are Saved.
_________________________________________________________________________
# get_print_function.c
A utility function to identify the function used to print the data for different output specifier.
________________________________________________________________________

# print_str.c
A function used to Write string to standard output(Stdout).
______________________________________________________________________
# print_buf.c
A function used to Write a buffer to standard output(Stdout).
______________________________________________________________________
# print_bin.c
A function used to Write a binary representation of unsigned integer  to standard output(Stdout).
______________________________________________________________________
# custom_str.c
prints the reversed string
_______________________________________________________________________
# man_3_printf
manual for _printf funcion
_________________________________________________________________________
# pnt_o_octal.c
function that  prints decimal in octal with leading character 'o'.
_________________________________________________________________________
# pnt_plus_int.c
function print positive desimal with plus(+) flag.
_________________________________________________________________________
# pnt_space_int.c 
function print decimal with leading space if no sign flag is specified.
_________________________________________________________________________
# pnt_upp_hex.c
function prints decimal in uppercase hexadecimal.
_________________________________________________________________________
# print_address.c
prints pointer address in hexadecimal.
_________________________________________________________________________
# print_chex.c
helper function for hexadecimal printer
________________________________________________________________________
# print_int.c
prints integer in decimal
_________________________________________________________________________
# print_octal.c
prints decimal in octal value(base 8).
_________________________________________________________________________
# print_shex.c
prints hexadecimal in lowercase.
_________________________________________________________________________
# print_unint.c
prints unsigned ineteger in decimal


