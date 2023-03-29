#include "main.h"

struct global
{
	char *format;
	int i;
	int j;
	int count;
	va_list args;
	char *str;
} id1;

/**
 * printchar - prints characters
 * Return: void
*/
void _printchar(void)
{
	_putchar(va_arg(id1.args, int));
	id1.count++;
}

/**
 * printstr - prints strings
 * Return: void
*/
void _printstr(void)
{
	id1.str = va_arg(id1.args, char *);
	if (id1.str == NULL)
		id1.str = "(null)";
	else
	{
		id1.j = 0;
		while (id1.str[id1.j] != '\0')
		{
			_putchar(id1.str[id1.j]);
			id1.j++;
			id1.count++;
		}		
	}	
}



/**
 * printf - prints int, char and strings
 * @format: format specifier
 * Return: 
*/
int _printf(const char *format, ...)
{
	/*initialization of variables*/
	id1.i = 0, id1.count = 0;
	if (format == NULL)
		return (-1);
	va_start(id1.args, format);
	while (format[id1.i] != '\0')
	{
		if (format[id1.i] == '%')
		{
			id1.i++;
			if (format[id1.i] == 'c')
				_printchar();
			else if (format[id1.i] == 's')
				_printstr();
			else if (format[id1.i] == 'd' || format[id1.i] == 'i')
				_printint();
			else if (format[id1.i] == 'b')
				_printbin();
			else if (format[id1.i] == 'p')
				_printpointer();
			else if (format[id1.i] == 'u')
				_printunsigned();
			else if (format[id1.i] == '%')
				_putchar('%');
			else
			{
				_putchar('%');
				_putchar(format[id1.i]);
				id1.count += 2;
			}			
		}
		else
		{
			_putchar(format[id1.i]);
			id1.count++;
		}
		id1.i++;		
	}
	va_end(id1.args);
	return (id1.count);	
}