#include "main.h"
#include <stdarg.h>

/**
 * _printint - printf int specifiers
 * @id.args: arguements taken
 *
 * Return: int
 */
int _printint(va_list id.args)
{
	long int n = va_arg(id.args, long int);
	unsigned long int num;

	if (n == NULL)
		num = "NULL";
	if (n < 0)
	{
		_putchar('-');
		num = (unsigned long int((-1) * n);
	}
	else if (n > 0)
	{
		num = unsigned long int(n);
	}
	else
		num = 0;

	return (num);
}
