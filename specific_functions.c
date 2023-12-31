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
		write(1, "(null)", 6);
		return (6);
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
* Description: recursive function that iterates itself until 0 is reach.
* Then it change the integer values to its ASCII character representation.
* Return: the total count of integers turned into characters.
*/
int itoa(unsigned int n)
{
	int count;
	char digits;

	count = 0;
	if (n != 0)
	{
		if (n >= 10)
		{
			count += itoa(n / 10);
		}
		digits = (n % 10) + '0';
		write(1, &digits, 1);
		count++;
		return (count);
	}
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	return (0);
}
/**
* print_digit - Function that print any digit with any sign.
* @arguments: va_list type variable.
*
* Description: this function receive a va_list 'arguments' parameter.
* Return: Number fo character printed.
*/
int print_digit(va_list arguments)
{
	int num, signCont = 0;
	unsigned int numberCont;

	num = va_arg(arguments, int);

	if (num < 0)
	{
		write(1, "-", 1);
		signCont = 1;
		numberCont = num * (-1);
	}
	else
	{
		numberCont = num;
	}
	if (numberCont > 0)
		return (signCont + itoa(numberCont));

	write(1, "0", 1);

	return (1);
}
