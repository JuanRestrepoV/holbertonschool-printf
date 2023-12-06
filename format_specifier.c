#include "main.h"
/**
* format_specifier - redirect _printf function based on the 'format' argument.
* @format: a char type variable containing the format specifier.
* @arguments: va_list type variable containing the variadic argument of
* _printf to be process.
*
* Description: This function takes every (existing) format as a case.
* If format coincide with the char specified in some of the cases, then
* it will enter to it's specific function taking arguments as a parameter.
*
* Return: integer.
*/
int format_specifier(char format, va_list arguments)
{
	if (format == 'c')
	{
		return (print_char(arguments));
	}
	if (format == 's')
	{
		return (print_string(arguments));
	}
	/**
	if (format == 'd')
	{
		return (print_decimal(arguments));
	}
	if (format == 'i')
	{
		return (print_integer(arguments));
	}
	if (format == '%')
	{
		return (print_percent(arguments));
	}
	*/
	return (0);
}
