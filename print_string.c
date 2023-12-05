#include <stdarg.h>
#include <unistd.h>
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
