#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/*
* _printf - Custom printf function
* @format: String containing format specifiers
*
* This function prints formatted output to stdout according to the
* provided format string.
*
* Return: Number of characters printed (excluding the null byte),
* or -1 in case of error.
*/
int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	va_list arguments;

	va_start(arguments, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			format++;
			count += format_specifier(format, arguments);
		}
		else
		{
			write (1, &format[i], 1);
			count++;
		}
		i++;
	}
	va_end(arguments);
	return (count);
}
