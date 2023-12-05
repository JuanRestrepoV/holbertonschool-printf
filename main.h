#ifndef _PRINTF
#define _PRINTF

/**
* Prototype:
*/
int _printf(const char *format, ...);



/**
* Specifier functions prototypes:
*/
int print_decimal(va_list_arguments);
int print_integer(va_list arguments);
int print_char(va_list arguments);
int print_string(va_list arguments);

#endif
