/**
* This file cotains the specific function that must execute in
* every format specifier case.
*/
#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
* print_char - Fucntion that print a char using write function.
* @arguments: va_list type variable.
*
* Description: this function receive a va_list 'arguments' parameter.
* Return: 1 if succes.
*/
int print_char(va_list arguments)
{
	char c = va_arg(arguments, int);

	write(1, &c, 1);
	return (1);
}
/**
* print_string - Fucntion that print a string using write function.
* @arguments: va_list type variable.
*
* Description: this function receive a va_list 'arguments' parameter.
* Return: integer.
*/
int print_string(va_list arguments)
{
	int count = 0;
	char *s = va_arg(arguments, char *);

	if (s == NULL)
	{
		return (0);
	}
	while (s[count] != '\0')
	{
		count++;
	}
	write(1, s, count);
	return (count);
}
/**
* print_percent - Fucntion that print a string using write function.
* @arguments: va_list type variable.
*
* Description: this function receive a va_list 'arguments' parameter.
* Return: integer.
*/
int print_percent(va_list arguments)
{
	write(1, '%', 1);
	return (1);
}
