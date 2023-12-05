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
