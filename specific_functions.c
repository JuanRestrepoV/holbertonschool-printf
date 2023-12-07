#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
* print_char - Function that print a char using write function.
* @arguments: va_list type variable.
*
* Description: this function receive a va_list 'arguments' parameter.
* Return: Number fo character printed.
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
* Return: Number of characters printed.
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
* Return: Number of character printed.
*/
int print_percent(va_list arguments)
{
	char c = '%';

	(void)arguments;

	write(1, &c, 1);
	return (1);
}
/**
* itoa - recursive function that iterates itself until reaching 0.
* @n: unsigned variable to iterate a number no matter its sign.
*
* Description: this function receive a va_list 'arguments' parameter.
* Return: 1 if succes.
*/
int itoa(unsigned int n)
{
	int count;
	unsigned int x, y;
	char itoa;

	if (n != 0)
	{
		count = 0;
		x = (n / 10);
		y = (n % 10);
		count += countNum(x);
		count++;
		itoa = y + '0';
		write(1, &itoa, 1);
		return (count);
	}
	return (0);
}
