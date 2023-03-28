#include "main.h"

/**
 * printchar - prints characters
 * Return: void
*/
void _printchar(void)
{
	_putchar(va_arg(id.args, int));
	id.count++;
}

/**
 * printstr - prints strings
 * Return: void
*/
void _printstr(void)
{
	id.str = va_arg(id.args, char *);
	if (id.str == NULL)
		id.str = "(null)";
	else
	{
		id.j = 0;
		while (id.str[id.j] != '\0')
		{
			_putchar(id.str[id.j]);
			id.j++;
			id.count++;
		}		
	}	
}

/**
 * printint - prints int
 * Return: void
*/

void _printint(void)
{
	int num, div, length;
	
	num = va_arg(id.args, int);
	div = 1;
	length = 0;
	if (num < 0)
	{
		_putchar('-');
		/*TODO: To try and see if removing the line below changes the output*/
		num = num * -1;
		id.count++;
	}
	/*This loop checks number of digits in that number*/
	/*TODO: I'll check */
	while (num / div > 0)
	{
		div = div * 10;
		length++;
	}
	div = div / 10;
	while (length > 0)
	{
		_putchar(((num / div) % 10) + '0');
		div = div / 10;
		length--;
		id.count++;
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
	id.i = 0, id.count = 0;
	if (format == NULL)
		return (-1);
	va_start(id.args, format);
	while (format[id.i] != '\0')
	{
		if (format[id.i] == '%')
		{
			id.i++;
			if (format[id.i] == 'c')
				_printchar();
			else if (format[id.i] == 's')
				_printstr();
			else if (format[id.i] == 'd' || format[id.i] == 'i')
				_printint();
			else if (format[id.i] == 'b')
				_printbin();
			else if (format[id.i] == '%')
				_putchar('%');
			else
			{
				_putchar('%');
				_putchar(format[id.i]);
				id.count += 2;
			}			
		}
		else
		{
			_putchar(format[id.i]);
			id.count++;
		}
		id.i++;		
	}
	va_end(id.args);
	return (id.count);	
}