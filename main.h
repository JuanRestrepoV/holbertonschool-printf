#ifndef _PRINTF
#define _PRINTF
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
* Prototype:
*/
int _printf(const char *format, ...);
int format_specifier(char format, va_list arguments);
/**
* Specifier functions prototypes:
*/
int print_char(va_list arguments);
int print_string(va_list arguments);
int print_percent(va_list arguments);
int itoa(unsigned int n);
int print_digit(va_list arguments);
#endif
